#include <stdio.h>

void prof()
{
    printf("Criston");
}

void virgula()
{
    printf(",");
}

void ponto()
{
    printf(".");
}

void quebraLinha()
{
    printf("\n");
}

void espaco()
{
    printf(" ");
}

void pedir()
{
    printf("por");
    espaco();
    printf("favor");
}

void pedir2()
{
    printf("me");
    espaco();
    printf("passa");
}

void onde()
{
    printf("em");
    espaco();
    printf("fup");
}

void pedir3()
{
    printf("me");
    espaco();
    printf("dá");
    espaco();
    printf("nota");
    espaco();
    printf("boa");
}

void explicar()
{
    printf("sou");
    espaco();
    printf("bom");
    espaco();
    printf("aluno");
    virgula();
    espaco();
    printf("as");
    espaco();
    printf("vezes");
    espaco();
    printf("só");
    espaco();
    printf("não");
    espaco();
    printf("entendo");
    espaco();
    printf("as");
    espaco();
    printf("questões");
}

void abrirParentese()
{
    printf("(");
}

void fecharParentese()
{
    printf(")");
}

void exclamacao()
{
    printf("!");
}

void entretanto()
{
    printf("mas");
    espaco();
    printf("gosto");
    espaco();
    printf("muito");
    espaco();
    printf("de");
    espaco();
    printf("você");
    exclamacao();
}

void entretanto2()
{
    printf("principalmente");
    espaco();
    printf("da");
    espaco();
    printf("sua");
    espaco();
    printf("didática");
    espaco();
    printf("e");
    espaco();
    printf("suas");
    espaco();
    printf("aulas");
    exclamacao();
}

void elogioSincero()
{
    printf("você");
    espaco();
    printf("é");
    espaco();
    printf("o");
    espaco();
    printf("cara");
    virgula();
    espaco();
    prof();
    exclamacao();
}

void carinhaTriste()
{
    printf(":");
    printf("(");
}

void pedir4(int numPedidos)
{
    if (numPedidos <= 0)
    {
        return;
    }

    printf("não");
    espaco();
    printf("me");
    espaco();
    printf("reprova");
    espaco();
    carinhaTriste();
    quebraLinha();

    pedir4(numPedidos - 1);
}

int main()
{
    prof();
    virgula();
    espaco();
    pedir();
    virgula();
    espaco();
    pedir2();
    espaco();
    onde();
    ponto();
    quebraLinha();
    pedir3();
    espaco();
    abrirParentese();
    onde();
    fecharParentese();
    ponto();
    quebraLinha();
    explicar();
    ponto();
    quebraLinha();
    entretanto();
    quebraLinha();
    entretanto2();
    exclamacao();
    quebraLinha();
    elogioSincero();
    exclamacao();
    exclamacao();
    quebraLinha();
    pedir4(5);
}