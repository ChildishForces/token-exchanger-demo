import { Button, StyleSheet, View } from 'react-native';
import { TokenExchanger } from 'react-native-token-exchanger';
import { ThemedText } from '@/src/components/ThemedText';

export default function TabTwoScreen() {
  // Methods
  const registerTokenExchanger = () => TokenExchanger.registerTokenExchanger(
    async (setupToken: string) => setupToken.toLowerCase(),
  );

  const testTokenExchanger = async () => {
    try {
      const value = await TokenExchanger.testTokenExchanger();
      console.log('Value:', value);
    } catch (error) {
      console.error('Error:', error.message);
    }
  }

  return (
    <View style={styles.root}>
      <ThemedText>Test Token Exchanger</ThemedText>
      <Button title="Register Token Exchanger" onPress={registerTokenExchanger} />
      <Button title="Test Token Exchanger" onPress={testTokenExchanger} />
    </View>
  );
}

const styles = StyleSheet.create({
  root: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
  },
});
