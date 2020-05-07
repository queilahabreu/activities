##Tente adivinhar o número##

class AdivinharNumero
	attr_reader :numero
	attr_reader :venceu

	def initialize
		@numero = Random.rand(1..10)
		@venceu = false
		
	end

	def adivinhar(numero)

		if numero == @numero
			@venceu = true
			puts "Você venceu"
		elsif numero > @numero
			puts "Número do sorteio é menor..."
		else
			puts "Número do sorteio é maior..."
		end
	end

end
#######
jogo = AdivinharNumero.new

until jogo.venceu do
puts "Informe um número de 1 a 10: "
numero = gets.to_i
jogo.adivinhar(numero)
end