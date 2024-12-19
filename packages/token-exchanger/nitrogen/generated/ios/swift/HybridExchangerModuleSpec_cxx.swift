///
/// HybridExchangerModuleSpec_cxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A class implementation that bridges HybridExchangerModuleSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridExchangerModuleSpec_cxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::tokenexchanger::bridge::swift`)
   * from `NitroTokenExchanger-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.tokenexchanger.bridge.swift

  /**
   * Holds an instance of the `HybridExchangerModuleSpec` Swift protocol.
   */
  private var __implementation: any HybridExchangerModuleSpec

  /**
   * Holds a weak pointer to the C++ class that wraps the Swift class.
   */
  private var __cxxPart: bridge.std__weak_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_

  /**
   * Create a new `HybridExchangerModuleSpec_cxx` that wraps the given `HybridExchangerModuleSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: any HybridExchangerModuleSpec) {
    self.__implementation = implementation
    self.__cxxPart = .init()
    /* no base class */
  }

  /**
   * Get the actual `HybridExchangerModuleSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridExchangerModuleSpec() -> any HybridExchangerModuleSpec {
    return __implementation
  }

  /**
   * Casts this instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public func toUnsafe() -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(self).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `HybridExchangerModuleSpec_cxx`.
   * The pointer has to be a retained opaque `Unmanaged<HybridExchangerModuleSpec_cxx>`.
   * This removes one strong reference from the object!
   */
  public class func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> HybridExchangerModuleSpec_cxx {
    return Unmanaged<HybridExchangerModuleSpec_cxx>.fromOpaque(pointer).takeRetainedValue()
  }

  /**
   * Gets (or creates) the C++ part of this Hybrid Object.
   * The C++ part is a `std::shared_ptr<margelo::nitro::tokenexchanger::HybridExchangerModuleSpec>`.
   */
  public func getCxxPart() -> bridge.std__shared_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_ {
    let cachedCxxPart = self.__cxxPart.lock()
    if cachedCxxPart.__convertToBool() {
      return cachedCxxPart
    } else {
      let newCxxPart = bridge.create_std__shared_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_(self.toUnsafe())
      __cxxPart = bridge.weakify_std__shared_ptr_margelo__nitro__tokenexchanger__HybridExchangerModuleSpec_(newCxxPart)
      return newCxxPart
    }
  }

  

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  @inline(__always)
  public var memorySize: Int {
    return MemoryHelper.getSizeOf(self.__implementation) + self.__implementation.memorySize
  }

  // Properties
  

  // Methods
  @inline(__always)
  public func registerTokenExchanger(tokenExchanger: bridge.Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string) -> bridge.Result_void_ {
    do {
      try self.__implementation.registerTokenExchanger(tokenExchanger: { () -> ((String) -> Promise<Promise<String>>) in
        let __sharedClosure = bridge.share_Func_std__shared_ptr_Promise_std__shared_ptr_Promise_std__string_____std__string(tokenExchanger)
        return { (__setupToken: String) -> Promise<Promise<String>> in
          let __result = __sharedClosure.pointee.call(std.string(__setupToken))
          return { () -> Promise<Promise<String>> in
            let __promise = Promise<Promise<String>>()
            let __resolver = { (__result: Promise<String>) in
              __promise.resolve(withResult: __result)
            }
            let __rejecter = { (__error: Error) in
              __promise.reject(withError: __error)
            }
            let __resolverCpp = { () -> bridge.Func_void_std__shared_ptr_Promise_std__string__ in
              final class ClosureHolder {
                let closure: ((_ result: Promise<String>) -> Void)
                init(wrappingClosure closure: @escaping ((_ result: Promise<String>) -> Void)) {
                  self.closure = closure
                }
                func invoke(_ __result: Promise<String>) {
                  self.closure(__result)
                }
              }
            
              let __closureHolder = Unmanaged.passRetained(ClosureHolder(wrappingClosure: __resolver)).toOpaque()
              func __callClosure(__closureHolder: UnsafeMutableRawPointer, __result: bridge.std__shared_ptr_Promise_std__string__) -> Void {
                let closure = Unmanaged<ClosureHolder>.fromOpaque(__closureHolder).takeUnretainedValue()
                closure.invoke({ () -> Promise<String> in
                  let __promise = Promise<String>()
                  let __resolver = { (__result: String) in
                    __promise.resolve(withResult: __result)
                  }
                  let __rejecter = { (__error: Error) in
                    __promise.reject(withError: __error)
                  }
                  let __resolverCpp = { () -> bridge.Func_void_std__string in
                    final class ClosureHolder {
                      let closure: ((_ result: String) -> Void)
                      init(wrappingClosure closure: @escaping ((_ result: String) -> Void)) {
                        self.closure = closure
                      }
                      func invoke(_ __result: String) {
                        self.closure(__result)
                      }
                    }
                  
                    let __closureHolder = Unmanaged.passRetained(ClosureHolder(wrappingClosure: __resolver)).toOpaque()
                    func __callClosure(__closureHolder: UnsafeMutableRawPointer, __result: std.string) -> Void {
                      let closure = Unmanaged<ClosureHolder>.fromOpaque(__closureHolder).takeUnretainedValue()
                      closure.invoke(String(__result))
                    }
                    func __destroyClosure(_ __closureHolder: UnsafeMutableRawPointer) -> Void {
                      Unmanaged<ClosureHolder>.fromOpaque(__closureHolder).release()
                    }
                  
                    return bridge.create_Func_void_std__string(__closureHolder, __callClosure, __destroyClosure)
                  }()
                  let __rejecterCpp = { () -> bridge.Func_void_std__exception_ptr in
                    final class ClosureHolder {
                      let closure: ((_ error: Error) -> Void)
                      init(wrappingClosure closure: @escaping ((_ error: Error) -> Void)) {
                        self.closure = closure
                      }
                      func invoke(_ __error: Error) {
                        self.closure(__error)
                      }
                    }
                  
                    let __closureHolder = Unmanaged.passRetained(ClosureHolder(wrappingClosure: __rejecter)).toOpaque()
                    func __callClosure(__closureHolder: UnsafeMutableRawPointer, __error: std.exception_ptr) -> Void {
                      let closure = Unmanaged<ClosureHolder>.fromOpaque(__closureHolder).takeUnretainedValue()
                      closure.invoke(RuntimeError.from(cppError: __error))
                    }
                    func __destroyClosure(_ __closureHolder: UnsafeMutableRawPointer) -> Void {
                      Unmanaged<ClosureHolder>.fromOpaque(__closureHolder).release()
                    }
                  
                    return bridge.create_Func_void_std__exception_ptr(__closureHolder, __callClosure, __destroyClosure)
                  }()
                  __result.pointee.addOnResolvedListener(__resolverCpp)
                  __result.pointee.addOnRejectedListener(__rejecterCpp)
                  return __promise
                }())
              }
              func __destroyClosure(_ __closureHolder: UnsafeMutableRawPointer) -> Void {
                Unmanaged<ClosureHolder>.fromOpaque(__closureHolder).release()
              }
            
              return bridge.create_Func_void_std__shared_ptr_Promise_std__string__(__closureHolder, __callClosure, __destroyClosure)
            }()
            let __rejecterCpp = { () -> bridge.Func_void_std__exception_ptr in
              final class ClosureHolder {
                let closure: ((_ error: Error) -> Void)
                init(wrappingClosure closure: @escaping ((_ error: Error) -> Void)) {
                  self.closure = closure
                }
                func invoke(_ __error: Error) {
                  self.closure(__error)
                }
              }
            
              let __closureHolder = Unmanaged.passRetained(ClosureHolder(wrappingClosure: __rejecter)).toOpaque()
              func __callClosure(__closureHolder: UnsafeMutableRawPointer, __error: std.exception_ptr) -> Void {
                let closure = Unmanaged<ClosureHolder>.fromOpaque(__closureHolder).takeUnretainedValue()
                closure.invoke(RuntimeError.from(cppError: __error))
              }
              func __destroyClosure(_ __closureHolder: UnsafeMutableRawPointer) -> Void {
                Unmanaged<ClosureHolder>.fromOpaque(__closureHolder).release()
              }
            
              return bridge.create_Func_void_std__exception_ptr(__closureHolder, __callClosure, __destroyClosure)
            }()
            __result.pointee.addOnResolvedListener(__resolverCpp)
            __result.pointee.addOnRejectedListener(__rejecterCpp)
            return __promise
          }()
        }
      }())
      return bridge.create_Result_void_()
    } catch (let __error) {
      let __exceptionPtr = __error.toCpp()
      return bridge.create_Result_void_(__exceptionPtr)
    }
  }
  
  @inline(__always)
  public func testTokenExchanger() -> bridge.Result_std__shared_ptr_Promise_std__string___ {
    do {
      let __result = try self.__implementation.testTokenExchanger()
      let __resultCpp = { () -> bridge.std__shared_ptr_Promise_std__string__ in
        let __promise = bridge.create_std__shared_ptr_Promise_std__string__()
        __result
          .then({ __result in __promise.pointee.resolve(std.string(__result)) })
          .catch({ __error in __promise.pointee.reject(__error.toCpp()) })
        return __promise
      }()
      return bridge.create_Result_std__shared_ptr_Promise_std__string___(__resultCpp)
    } catch (let __error) {
      let __exceptionPtr = __error.toCpp()
      return bridge.create_Result_std__shared_ptr_Promise_std__string___(__exceptionPtr)
    }
  }
}