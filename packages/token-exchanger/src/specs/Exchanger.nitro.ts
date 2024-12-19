import { NitroModules, type HybridObject } from 'react-native-nitro-modules'

type TokenExchanger = (setupToken: string) => Promise<string>

export interface ExchangerModule extends HybridObject<{ ios: 'swift' }> {
  registerTokenExchanger(tokenExchanger: TokenExchanger): void
  testTokenExchanger(): Promise<string>
}

export const TokenExchanger =
  NitroModules.createHybridObject<ExchangerModule>('ExchangerModule')
