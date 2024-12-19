import NitroModules

class HybridExchangerModule : HybridExchangerModuleSpec {
  typealias TokenExchanger = (_ setupToken: String) -> Promise<Promise<String>>

  private var tokenExchanger: TokenExchanger?
  public override var memorySize: Int { 0 }
  
  func registerTokenExchanger(tokenExchanger: @escaping TokenExchanger) throws -> Void {
    self.tokenExchanger = tokenExchanger
  }

  func testTokenExchanger() throws -> Promise<String> {
    let setupToken = "SETUP_TOKEN"
    
    guard let tokenExchanger = self.tokenExchanger else {
      throw RuntimeError.error(withMessage: "Token exchanger is not registered")
    }

    return .async {
      let innerPromise = try await tokenExchanger(setupToken).await()
      let value = try await innerPromise.await()
      return value
    }
  }
}
