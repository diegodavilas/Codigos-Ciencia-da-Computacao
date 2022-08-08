import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class EscolaIdiomas extends JFrame implements ActionListener{
    //DEFININDO OBJETOS DE TELA
    //Label para os campos
    JLabel lNome, lNascimento, lIdioma, lTurno;

    //Campos de texto
    JTextField tfNome, tfNascimento;
    
    //ComboBox de seleção
    JComboBox cbIdioma;

    //Botão de seleção
    JRadioButton rbMatutino, rbVespertino, rbNoturno;
    ButtonGroup grupoTurno = new ButtonGroup();

    //Botões
    JButton bLimpar, bSalvar, bExcluir, bSair;

    //BARRA DE MENU
    JMenuBar mbBarraMenu = new JMenuBar();
    
    //Menus
    JMenu mControles = new JMenu("CONTROLES");
    JMenu mSobre = new JMenu("SOBRE");
    
    //Submenus
    JMenuItem miSalvar = new JMenuItem("Salvar");
    JMenuItem miLimpar = new JMenuItem("Limpar");
    JMenuItem miExcluir = new JMenuItem("Excluir");
    JMenuItem miSair = new JMenuItem("Sair");
    JMenuItem miDesenvolvedores = new JMenuItem("Desenvolvedores");

    //MODELO DA TABELA
    DefaultTableModel modelo = new DefaultTableModel();
    
    //Criando a tabela
    JTable tabela = new JTable(modelo);
    //Tabela com barra de rolagem
    JScrollPane scrollPane = new JScrollPane(tabela);

    public EscolaIdiomas(){
        //CRIA O LAYOUT DA JANELA
        setLayout(new FlowLayout());
        setSize(1000,700);
        setVisible(true); 
        setTitle("CADASTRO DE ALUNOS");
        this.getContentPane().setBackground(Color.WHITE); // Definindo cor de fundo
        this.setLayout(null); // Deixando sem definição de layout para mais tarde fazer manualmente
        setLocationRelativeTo(null); // Definindo a posição da janela no centro da tela 
        setResizable(false); // Bloqueado maximização e customização de tamanho
        Container janela = getContentPane();

        //CRIA O COMBOBOX DO IDIOMA
        String[] idiomas = {"", "Inglês", "Espanhol"};
        JComboBox<String> cbidiomas = new JComboBox<>(idiomas);
        cbidiomas.setMaximumRowCount(6);
        cbidiomas.setEditable(true);

        //CRIA O RADIOBUTON E ADICIONA AO GRUPO DO TURNO
        rbMatutino = new JRadioButton("Matutino", false);
        rbVespertino = new JRadioButton("Vespertino", false);
        rbNoturno = new JRadioButton("Noturno", false);
        grupoTurno.add(rbMatutino);
        grupoTurno.add(rbVespertino);
        grupoTurno.add(rbNoturno);
        
        //Adiciona submenus
        mControles.add(miSalvar);
        mControles.add(miLimpar);
        mControles.add(miExcluir);
        mControles.addSeparator();
        mControles.add(miSair);
        mSobre.add(miDesenvolvedores);

        //ADICIONA BARRA DE MENU À JANELA
        mbBarraMenu.add(mControles);
        mbBarraMenu.add(mSobre);
        setJMenuBar(mbBarraMenu);

        //INSTANCIA  OS LABELS COM RÓTULOS
        lNome = new JLabel("NOME DO ALUNO:");
        lNascimento = new JLabel("DATA DE NASCIMENTO");
        lIdioma = new JLabel("IDIOMA DESEJADO");
        lTurno = new JLabel("TURNO DE ESTUDO");

        //INSTANCIA OS BOTOES COM RÓTULOS
        bLimpar  = new JButton("LIMPARCAMPOS");
        bSalvar = new JButton("SALVAR");
        bExcluir = new JButton("EXCLUIR");
        bSair = new JButton("SAIR");

        //CRIA OS CAMPOS DE TEXTO
        tfNome = new JTextField(10);
        tfNascimento = new JTextField(10);
        
        //ARMAZENA A COMBOBOX IDIOMA NO OBJETO cbIdioma
        cbIdioma = cbidiomas;

        //CRIA OUVINTES PARAOS BOTÕES
        bSalvar.addActionListener(this);
        bLimpar.addActionListener(this);
        bExcluir.addActionListener(this);
        bSair.addActionListener(this);
        miSalvar.addActionListener(this);
        miLimpar.addActionListener(this);
        miExcluir.addActionListener(this);
        miSair.addActionListener(this);
        miDesenvolvedores.addActionListener(this);

        //ADICIONAR NOMES ÀS COLUNAS NO MODELO DA TABELA
        modelo.addColumn("ALUNO");
        modelo.addColumn("DATA DE NASCIMENTO");
        modelo.addColumn("IDIOMA");
        modelo.addColumn("TURNO DE ESTUDO");

        //CRIA E LER DIMENSÕES DA ÁREA("x" E "y") DAS JANELAS
        int x = getContentPane().getSize().width;
        int y = getContentPane().getSize().height;

        //DEFININDO A LOCALIZAÇÃO DE CADA COMPONENTE
        lNome.setBounds(x - 950, y - 650, 200, 25);
        tfNome.setBounds(x - 950, y - 625, 300, 25);
        lNascimento.setBounds(x - 645, y - 650, 200, 25);
        tfNascimento.setBounds(x - 645, y - 625, 120, 25);
        lTurno.setBounds(x - 950, y - 580, 200, 25);
        rbMatutino.setBounds(x - 950, y - 555, 120, 25);
        rbVespertino.setBounds(x - 830, y - 555, 120, 25);
        rbNoturno.setBounds(x - 710, y - 555, 120, 25);
        lIdioma.setBounds(x - 565, y - 580, 200, 25);
        cbIdioma.setBounds(x - 565, y - 555, 200, 25);
        bSalvar.setBounds(x - 950, y - 520, 130, 25);
        bLimpar.setBounds(x - 440, y - 650, 150, 25);
        bExcluir.setBounds(x - 950, y - 80, 130, 25);
        bSair.setBounds(x - 180, y - 80, 130, 25);
        scrollPane.setBounds(x - 950, y - 450, 421, 300);

        //ADICIONAR OBJETOS NA JANELA
        janela.add(lNome);
        janela.add(tfNome);
        janela.add(lNascimento);
        janela.add(tfNascimento);
        janela.add(lTurno);
        janela.add(rbMatutino);
        janela.add(rbVespertino);
        janela.add(rbNoturno);
        janela.add(lIdioma);
        janela.add(cbIdioma);
        janela.add(bSalvar);
        janela.add(bLimpar);
        janela.add(scrollPane);
        janela.add(bExcluir);
        janela.add(bSair);
        janela.revalidate();
    }

    //MÉTODO PARA APAGAR OS CAMPOS
    public void Limpar(){
        tfNome.setText("");
        tfNascimento.setText("");
        grupoTurno.clearSelection();
        cbIdioma.setSelectedIndex(0);

    }

    public static void main(String[] args) {
        EscolaIdiomas escola = new EscolaIdiomas();
        escola.setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

    @Override
    public void actionPerformed(ActionEvent ae){
        //AÇÃO DO BOTÃO E MENU INTERNO SAIR
        if(ae.getSource() == bSair || ae.getSource() == miSair){
            System.exit(0);
        }

        //AÇÃO DO MENU SOBRE
        if(ae.getSource() == miDesenvolvedores){
            new Desenvolvedores();
        }

        //AÇÃO DO BOTÃO E MENU LIMPAR
        if(ae.getSource() == bLimpar || ae.getSource() == miLimpar){
            Limpar();
        }

        //AÇÃO DO BOTÃO SALVAR
        if(ae.getSource() == bSalvar || ae.getSource() == miSalvar){
            if(tfNome.getText().length() > 0 && tfNascimento.getText().length() > 0 && cbIdioma.getSelectedItem() != "" && (rbMatutino.isSelected() == true || rbVespertino.isSelected() == true || rbNoturno.isSelected() == true )){
                String nome = tfNome.getText();
                String nascimento = tfNascimento.getText();
                String idioma = (String) cbIdioma.getSelectedItem();
                String turno;
                if(rbMatutino.isSelected()) turno = rbMatutino.getText();
                    else{
                        turno = rbVespertino.isSelected() ? rbVespertino.getText() : rbNoturno.getText();
                    }
                Limpar();
                modelo.addRow(new Object[]{nome, nascimento, idioma, turno});
            }
            else{
                JOptionPane.showMessageDialog(null, "O preenchimento dos campos é obrigatório", "Warning", JOptionPane.INFORMATION_MESSAGE);
            }
        }
        //AÇÃO DO BOTÃO E MENU EXCLUIR
        if(ae.getSource() == bExcluir || ae.getSource() == miExcluir){
            int a = JOptionPane.showConfirmDialog(null, "Quer realmente EXCLUIR esse Aluno?", "Confirmacao", JOptionPane.YES_NO_OPTION);
            if(a==0){
                if(tabela.getSelectedRow()>=0){
                    modelo.removeRow(tabela.getSelectedRow());
                    tabela.setModel(modelo);
                }else{
                    JOptionPane.showMessageDialog(null, "Selecione um aluno na tabela");
                }
            }
        }
    }
}