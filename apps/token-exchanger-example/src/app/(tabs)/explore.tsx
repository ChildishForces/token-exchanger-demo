import { Button, StyleSheet, View } from 'react-native';
import { TokenExchanger } from 'react-native-token-exchanger';
import { ThemedText } from '@/src/components/ThemedText';
import { isError } from "@/src/utilities/isError";
import {useRef, useState} from "react";

export default function TabTwoScreen() {
  // Refs
  const iterations = useRef<number>(0);

  // Methods
  const registerTokenExchanger = () => TokenExchanger.registerTokenExchanger(
    async (setupToken: string) => {
      iterations.current += 1;
      return `${setupToken.toLowerCase()}-${iterations.current}`;
    },
  );

  const testTokenExchanger = async () => {
    try {
      const value = await TokenExchanger.testTokenExchanger();
      console.log('Value:', value);
    } catch (error) {
      if (!isError(error)) return;
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
