import javax.swing.*;
public class Desenvolvedores extends JFrame {
    JTextField texto;
    public Desenvolvedores(){
        setSize(700, 100);
        setVisible(true);
        setLocationRelativeTo(null);
        texto = new JTextField("Autore: Diego D'Ávila de Sousa, Thiago César Lima Rocha, Leonardo Barbosa de Oliveira");
        add(texto);
    }    
}
