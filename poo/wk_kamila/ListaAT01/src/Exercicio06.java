import javax.swing.JOptionPane;

/*
Faça um programa que leia a idade de uma pessoa e informe a sua classe eleitoral:
Não eleitor (abaixo de 18 anos);  
Eleitor obrigatório (de 18 a 65 anos); 
Eleitor facultativo (acima de 65 anos).
*/
public class Exercicio06 {
	public static void main(String[] args) {
        int idade = Integer.parseInt(JOptionPane.showInputDialog("Digite a idade da pessoa:"));

        String classeEleitoral;

        if (idade < 18) {
            classeEleitoral = "Não eleitor (abaixo de 18 anos)";
        } else if (idade >= 18 && idade <= 65) {
            classeEleitoral = "Eleitor obrigatório (de 18 a 65 anos)";
        } else {
            classeEleitoral = "Eleitor facultativo (acima de 65 anos)";
        }

        JOptionPane.showMessageDialog(null, classeEleitoral, "Classificação Eleitoral", JOptionPane.INFORMATION_MESSAGE);
    }
}
