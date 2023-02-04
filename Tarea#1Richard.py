
# richard oggioni narvaez

# Ejercicio #1

"""def verificarDiagonales(mat):
    respuestamatriz=0
    mat=mat
    recuentomatriz=1
    i=0
    y=len(mat)-1
    while(recuentomatriz<=len(mat)):  #permite repetir las comparaciones
        if(mat[i][i]==mat[i][y]):  #Compara las diagonales si son iguales
            i+=1
            y-=1
            recuentomatriz+=1
            respuestamatriz=True  #Convierte en verdadero o confirma q son iguales las diagonales
        else:
            recuentomatriz=len(mat)+1
            respuestamatriz=False

    return respuestamatriz

print(verificarDiagonales([[11,23,76,34,11], [14,30,92,30,101], [12,45,58,92,22],[74,56,49,56,100],[99,5,28,47,99]]))"""


# Ejercicio #2

"""def esCapicua(lista):
    respuesta=0  #Indica si es falso o verdadero el capicua entre las dos listas
    i=0           
    recuento=1
    listaRevertida=[]
    for x in reversed(lista):  #Invierte la lista
        listaRevertida.append(x)  #Guarda la lista invertida en una lista vacia
    while(recuento<=len(lista)):  #Permite que se comparen los numeros de las lista siempre y cuando sea la cantidad de objetos que hay en la lista
        if(lista[i]==listaRevertida[i]):  #Compara la lista normal y la invertida
            i+=1
            recuento+=1
            respuesta=True
        else:
            recuento=len(lista)+1
            respuesta=False

    return respuesta  # Retorna el True si es capicua la lista y el False si no lo es
        
print(esCapicua([42, 12, 90, 90, 12, 42]))"""


#Ejercicio #3

def diferenciaListas(ListaA,ListaB):
    
                
                

diferenciaListas([40, 10, 22, 12, 33, 33, 33],[41, 22, 31, 15, 13, 12, 33, 19])