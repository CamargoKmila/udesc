import javax.swing.JOptionPane;

/*Faça um programa que peça ao usuário 10 números e mostre 
posteriormente quantos são pares e a soma deles, 
bem como quantos são ímpares e a soma deles.
*/

public class Exercicio01 {
	
	public static void main(String[] args){
		int entradaNumeros = 10;
		int contPar = 0;
		int contImpar = 0;
		int somaPar = 0;
		int somaImpar = 0;
		
		for (int i = 1; i <= entradaNumeros; i++) {
			int numero = Integer.parseInt(
					JOptionPane.showInputDialog("Digite o número " + i + ":"));
			
			if (numero % 2 == 0) {
				contPar++;
				somaPar += numero;
			} else {
				contImpar++;
				somaImpar += numero;
			}
		}
		
		String output = "Números pares: " + contPar + "\nSoma dos pares: " + somaPar
                + "\n\nNúmeros ímpares: " + contImpar + "\nSoma dos ímpares: " + somaImpar;
		
		JOptionPane.showMessageDialog(null, output, "Resultados", JOptionPane.INFORMATION_MESSAGE);
	}
}
