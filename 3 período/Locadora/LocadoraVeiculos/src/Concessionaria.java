package poo_concesonaria;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
public class POO_CONCESONARIA extends JFrame implements ActionListener{
    JTextField tnome = new JTextField();
    JTextField trua = new JTextField();
    JTextField tnum = new JTextField();
    JLabel lnome = new JLabel("Nome :");
    JLabel lendereço = new JLabel("Endereço");
    JLabel lrua = new JLabel("Rua:");
    JLabel lnum = new JLabel("Número:");
    JLabel lida = new JLabel("Maior de 18 anos?"); 
    JLabel sim = new JLabel("SIM");
    JLabel nao = new JLabel("NÃO"); 
    JLabel ltitulo = new JLabel("REGISTRO CARROS-CONCESONARIA");
    JButton bsalvar, bdeletar, blimpar, bsair;
    String [] bai = {"Bairro","Centro","Beira rio","Cafeteira"};
    JComboBox cbBairro = new JComboBox(bai); 
    JRadioButton rbs = new JRadioButton("SIM");
    JRadioButton rbn = new JRadioButton("NÃO");
    ButtonGroup grup = new ButtonGroup();
    String [] cid = {"Cidade","Imperatriz","Davinopolis","Açailandia"};
    JComboBox cbCidade = new JComboBox(cid);
    Font fonte = new Font("Courier New",Font.BOLD,30);
    public POO_CONCESONARIA(){
        Elementos b = new Elementos(570,420,90,25);
        Elementos l = new Elementos(55,50,40,20);
        Elementos adr = new Elementos(l.x,l.x + l.a + 15,100,20);
        Elementos loc = new Elementos(adr.x,adr.y + adr.a + 2,95,25);
        setLayout(null);
        setSize(700,500);
        setVisible(true);
        setTitle("POO_CONCESONARIA");
        setLocationRelativeTo(null);
        bsalvar = new JButton("SALVAR");
        bdeletar = new JButton("DELETAR");
        blimpar = new JButton("LIMPAR");
        bsair = new JButton("SAIR");
        ltitulo.setBounds(160,10,400,30);
       
        ltitulo.setFont(fonte);
        
        bsalvar.setBounds(b.x - 2*(b.l + 10), b.y, b.l, b.a);
        bdeletar.setBounds(b.x - (b.l + 10), b.y, b.l, b.a);
        bsair.setBounds(b.x, b.y, b.l, b.a);
        blimpar.setBounds(b.x - 3*(b.l + 10), b.y, b.l, b.a);
        tnome.setBounds(l.x + l.l + 10, l.y, 140, 20);
        lnome.setBounds(l.x,l.y,l.l,l.a);
        lendereço.setBounds(adr.x,adr.y,adr.l,adr.a);
        cbCidade.setBounds(loc.x,loc.y,loc.l,loc.a);
        cbBairro.setBounds(loc.x + loc.l + 10,loc.y,loc.l,loc.a);
        lrua.setBounds(adr.x + 2*loc.l + 30, adr.y, 40, 20);
        trua.setBounds(loc.x + 2*loc.l + 30, loc.y, 160,20);
        lnum.setBounds(adr.x + 3*loc.l + 110, adr.y, 60,20);
        tnum.setBounds(loc.x + 3*loc.l + 110, loc.y, 60,20);
        lida.setBounds(l.x + 2*120, l.y, 110,20); 
        
        sim.setBounds(l.x + 2*120 + 115, l.y,30,20);
        nao.setBounds(l.x + 2*120 + 175, l.y,30,20);
        rbs.setBounds(l.x + 2*120 + 140, l.y,20,20);
        rbn.setBounds(l.x + 2*120 + 200,l.y,20,20);
        
        grup.add(rbs);
        grup.add(rbn);
        
        cbCidade.addActionListener(this);
        bsalvar.addActionListener(this);
        bdeletar.addActionListener(this);
        bsair.addActionListener(this);
        blimpar.addActionListener(this);
        
        add(sim);
        add(nao);
        add(rbs);
        add(rbn);
        add(lida);
        add(lrua);
        add(trua);
        add(lnum);
        add(tnum);
        add(cbCidade);
        add(cbBairro);
        add(ltitulo);
        add(lendereço);
        add(lnome);
        add(tnome);
        add(bsalvar);
        add(bdeletar);
        add(blimpar);
        add(bsair);
       
        
    }
    public static void main(String[] args) {
        POO_CONCESONARIA j = new POO_CONCESONARIA();
   j.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    @Override
    public void actionPerformed(ActionEvent ae) {
        if(ae.getSource() == bsalvar){
            
        
        }
        if(ae.getSource() == bdeletar){
            
        }
        if(ae.getSource() == blimpar){
            
        }
        if(ae.getSource() == bsair){
           System.exit(0);
        }
    }
  
}