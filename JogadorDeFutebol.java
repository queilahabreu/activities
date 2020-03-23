
package exercicio1_mata55;

/**
 *
 * @author queila
 */

public class JogadorDeFutebol {
    String nome;
    String posicao;
    int ano;
    String nacionalidade;
    float altura;
    int peso;
    int soma = 0;
    
    void dados(){
        System.out.println("Nome: "+this.nome);
        System.out.println("Posição: "+this.posicao);
        System.out.println("O ano que nasceu: " + this.ano);
        System.out.println("Nacionalidade: "+this.nacionalidade);
        System.out.println("Altura: "+this.altura);
        System.out.println("Peso: "+this.peso);
    }
    
    void idade(){
        while(this.ano < 2020){
            soma++;
            this.ano++;
        }
        System.out.println("Idade do Jogador: "+soma);
    }
    
    void aposentar(){
        int tempo = 0;
        if(this.posicao == "defesa"){
            while(this.soma < 40){
                tempo++;
                this.soma++;
            }
        }
        else if(this.posicao == "meio-campo"){
                    while(this.soma < 38){
                        tempo++;
                        this.soma++;
                    }
                }
                    else{
                        while(this.soma < 35){
                        tempo++;
                        this.soma++;
                    }
                            
                            }
                    
                     System.out.println("Falta: "+tempo+" anos para se aposentar");
        
                    }
        }
    
