struct No{
    struct info;
    struct No* proximo;


};
struct Lista{

    struct No* inicio;
    int tamanho;
};

struct Lista* criar(){

    struct Lista* nova_lista = (struct Lista*) malloc(size of (struct Lista));
    if (nova_lista != NULL){
        nova_lista -> inicio = NULL;
        nova_lista -> tamanho = 0;
    }
   return nova_lista;
}
