#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

void suma();
void resta();
void multiplicacion();
void menu();

int main()
{
	system("color F0");
    printf("                                                                                                               \n                                                                                                               \n                                                                                                               \n                                ,:+QQQQQQQm+;::,.``          ``,,::;+QQQQQQQ+;:`                               \n                    :+QQQQ;,     ,,      QQQQQm   +mm `mm   +mm   QQQQQQ    :      `:+QQQQ:`                   \n           :+QQQ:    :; .QQ    mm::QQ    mm.,:`   +mQm mm   mm+   mm.       mm:Qmm    QQ      ,.QQQ:           \n      .Qm`    QQm   `mmm mm   ;mm QQm    mm       +m:+mmm   mm:   mm .,:   ;mmQQm.   Qmm     mmm      :QQ      \n      m        mm    mm,mmm    QmQQmmm   QQQQQQ   ;;, ::;   ;.`   QQQQQQ   mm: ,mQ   mm    .mQmm        m`     \n       m       QmQ   mm` QQ+       `::+QQQQQQQQQQQQ+++++++++mQQQQQQQQQQQm;:,     `   QQ   QmQQmm       mm      \n        Q       Q:    :.QQQQ.:.                                                  ,:mQQQm:.    .QQ      Q       \n        +Q   :QQQ+:         m                                                     :Q        .:QQQ.    m        \n         ,Qm.mQQQm;:. mQ `,.Qm               ;                   m .m+ ;`        .mQ:`  Q. ,:+QQQQ,.Qm         \n     .QQ;m  :mQQQQQQ;        m        :mmQQQQQQ                 , mQ mmQmmQm     m;       :QQQQQQQ:  :mQQ+     \n     Q   m`               mQ+    ;:`:``m+.Q+   m                 m:.mmmmQmQmmQQm: ,QQ:               m.  m     \n      m  m  `:+QQQQQQ+:`        mQ++..m,m.     m              `QQ+.mmmmQQ..      m      :;QQQQQQm;,  m  m      \n       m m     :QQmQQQ;           ;QQQQQ`m   QQ .              ;+m+ Q,mm.Q.+m; `         .QQQ+QQ:    Q; m      \n      QQ:   Qmmmmm;.mmmmmQ               :  m;;Q.            Q+Q+  mm`mm,m            Qmmmmm;.QmmmmQ   Qm      \n          Q.Qm:`    m,mmmQ               +  m;..m              QQ mm mm QQ            Qmm+;+    .;QQ;+         \n         mmmmQ QmmmmQ.mm                 Q  mmmmm:            mQ,m mQmmm,:;             mm.:Qmmmm ,mmmm        \n        mmmQ ;mmQ:  m:;mm             ;,., .mm   `;        Qm:.Qm Q`m;Qm m  ,          mm+.m  Qmmm, mmmm       \n       QmmQ mmmQQmmmmQ +mmQ          Q `m. mm ,mmQ.        mQQQ: QQ+mm Qm   Q       `Qm:m mmmmmm mm: mmmm      \n       mm+  mmm`mmm+Qm                            `        ``.`                           m+.mmm mmm .mmm      \n      ;m+ :mmmm mmm mm+ mmmmmmmmmmmmmmmmmmmmQQ ,Q.     mmmmmmmQm `Q                    Q`+mm mmm mmmQ.;mm`     \n      m.Qm`m:m;+:Q ;.mQ,.Qmmmmmmmmmmmmmmmmm Q          mmmmmmmmmmmmQ Q                Q. +m;. m,::m;m QQ;m     \n      mmmm.mmmQmmmmmm.+m.+Qmmmmmmmmmmmmm:;   mmmmm     mmmmmmmmm  mmmQ`;             mQ+.Q;m+,mmm mmm: mmm     \n      mmm mmmm mmm.mmm mm,Q;mmmmmmmmmm+,     mm        mmmmmmmmm  mmmmmm Q          ,Q.m+ mm+ mmm ,mm+  mm     \n      mmm  mmm mmm mm mm.m+Q mmmmmmmm Q      mmQQQ     mmmmmmmmm  mmmmmmmQ          mmmmm  m.  mm  mm+  mm     \n      mm  +;m m:m .mm Qm m;mm mmmmmm .       mm     .+:  .;Qmmmm  mmmmmmmmm      ` .m;mm.Q mmm m.  ,mm. m.     \n      mm Q m`Q,mQm.mQ`m:,m.m:m mmmm :        QQ  Q Q        Q Qm  mmmmmmmmmm    . m,mmm:m mmm Q;m mQmm Qmm     \n      mmmm mmm mmm.mm mm mmmQm, QmmQ           Q .``        : Q Qmmmmmmmmmmm;Q Q,,mmmm.mm mmm mmm` mmm mmm     \n      mmmm mmm mmm mm mm Q`Q,m+m;Q            Q.mmm;``Q;;m: Qmmm mmmmmmmmmmmm Qmm:m,m;Qmm  mm  mm  mmm mmm     \n      mmmm mmm mmm mm,mmm mmm+mmmQ  m  mQQQQQQ mmmmmm;    .Qmmmmm ++++QQmmmmm Qmmm;mmm mm  mm  mm  mmm mmm     \n      mmmm mmm mmm mm,mmm mmmQmmmm  +          mmmmm      ` mmmmm          m` m.mmmQmmmmm  mm  mm  mm  mm;     \n      mmmm mmm mmm mmm Q+ +mmm+mm+ mm,,QQQQQQQ mmmmmQ .  m Qmmmmm ....   .`   ;mmmQmm+mmQ.:mm `mm  mm  mm      \n      mmmm mmm ,mm mmm    Q;mm+Qmm mmmmmmmmmmmm mmQ Q  .;  m Qmm ,          .`mQm;mm.Qmm QQmm +mQ  mm  mm      \n       mmm mmm  mmQ mm   ::Q:;mm Qm,mmmmmmmmmmmm  Q          .               mQ mm;:Q::   mQ mmm  mmQ mmm      \n       mmm mmm mmm, `+     mQ.m: Q +QmmmmmmmmmmmmQ :m`    `Q.;:            QQ Q :m,m.     m   mm. mm  mm       \n       mmm `mmQ  m        mQmmmQQ,m;,QmmmmmmQQmmmmQ` ;+mQQQm Q    Q`      Q.mQ,Q+mQ,QQ        m m mm mmm       \n       mmmm mmm  ..        Qm,m`   m Q.mmmQ Qm +Qm     mmmmmm +`+ Q.``   ;Q m,  ,m .m    QQ      Qmm mm.       \n        mmm Qm       :    m,mQ     m, m Q Q     m: ++, QQQQQ: ,Qmmmmm;`Q m ,mm `  mm:QQQQ:mQQ    mm ,mm        \n        mmm` m     ++.,;QQ mm     mm  mmQ m           ,QQQQmmmmmmmmmmQ Q mm .m      .m Q+`.`+    mm mmQ        \n        QmmQ  Q    :QQ.m;m:+      mm  m` .m;..         mmmmmmmmmmmQ m:m  mm  m:     m +mm  `     QQ mm         \n         mm        m.Q  QQ: Q     m  mm  mm  m` .Q.    mmmmmQQ. `:m+  m  mm  mm   QmQ              mmm         \n         Qm                +mQ   mm  mm.:mm,:mm;QmQQQm;::QQ+:  QQ m+;,m ;mm  mm    Qm`             mm          \n          m                mQ    mm  mm  mm  mm Q+mmmmm+m     ;Q mm: mm  mmm :mm                   m.          \n          +                     mmm  mm  mm  mm  Q.mmmm+m     m` mm` mm  +mm  mm                  ..  QQm:     \n           m  Q.+Q              mm  .mm  mm  mm+ mm mmm+m    mm  mm  mm  `mm  mmm           Qm.+     Q ` :     \n      :Q        .+QQQ.;+.QQ    .mm  mmm  mm  mmm  mm mm+m , ,mm  mm  mm`  mm  ,mm            +. `  .QQ:Q       \n      Q  +          .:+.QQ       ,;  :Q.  Q:, QQ  Qm` m+mm. QQ`:;Q.`.Q. ;.Q  `;               Q:.m ,   m       \n      Q,  m         QmQQ      +QQ                     ,QQ+                  :QQ         :QQQ   Q;`   ; m       \n       :+.Q` ``Q:  m    Q.:Q     ,:Q`     .            mQ                  m,` m     :Q  : mmQ:,     :Q.       \n        m     m  mm  . Q mm          m  m  :;`QQ                       QQQQ+ Q.     m  m Q .m   .`.QQ          \n        m  `     :Qm m Q.   Q  `  Q   Q`        Qm                   Q+     +m    +Q    .` ,Q``                \n        Q+ Q     `m  m.    .   m   Q   Qm   ;  `Q  +QQ      QmQ Q,  ,Q   ,   m   Q  Q  ;:`Q:                   \n          +Q: ; ;Q`mmQQ:  Q    m    ,     QQ. ;    Q,  QQ `Q   .   Qm `  ; +Q   m     mQ.                      \n              :Q.QQ +   .m      Q     +      ,Q Q     ,Q;  :+QQ: Q  mQ  Q +Q+  m,QQQm                          \n               +Q `      Q:Q     Q      :;  ; ; ` ;:       ,Q;  mQ,m  . . QQQQQ Q . .Q        :;:              \n               Q`  Q   Q . Q:Q   QQ:,:QQm  Q m+Q;,QQ Q,       ,QQ:,Q.Q .Q :Q, ;   Q  m.:;+.:  .;  m            \n                m     Q    :   `m  ,    ` ,Qm+         :Q ,QQ,`     mQQQ.`   ;  .  +m  ;    ,.   .,m           \n              Q  ;Q+., Q  .    m     ;      .m.` Q.Q:  m. ::   :   `m`  m   .      m:Qm  .   Q    m            \n             Q   .     :;;;:`   m    m  .  :QQ.Q Q:`QQ: Qm.: ;QQmQ QQQQQ+,,`.  .QQ`     ;QQ,,m:QQ              \n             Qm                  :QQ+Q+QQ:       m:Q,QQ+ QQ`  :+Q.                                             \n                                                 Q m Q Q ;+Q Q .Q ;                                            \n                                              .,Q .Q`  Q, .:+m m m                                             \n                                              Q  :      m,Q;.m Q                                               ");
    printf("\n    ÛÛÛÛÛÛÛ                                                     ÛÛÛ                                      \n  ÛÛÛ°°°°°ÛÛÛ                                                  °°°                                       \n ÛÛÛ     °°ÛÛÛ ÛÛÛÛÛÛÛÛ   ÛÛÛÛÛÛ  ÛÛÛÛÛÛÛÛ   ÛÛÛÛÛÛ    ÛÛÛÛÛÛ  ÛÛÛÛ   ÛÛÛÛÛÛ  ÛÛÛÛÛÛÛÛ    ÛÛÛÛÛÛ   ÛÛÛÛÛ \n°ÛÛÛ      °ÛÛÛ°°ÛÛÛ°°ÛÛÛ ÛÛÛ°°ÛÛÛ°°ÛÛÛ°°ÛÛÛ °°°°°ÛÛÛ  ÛÛÛ°°ÛÛÛ°°ÛÛÛ  ÛÛÛ°°ÛÛÛ°°ÛÛÛ°°ÛÛÛ  ÛÛÛ°°ÛÛÛ ÛÛÛ°°  \n°ÛÛÛ      °ÛÛÛ °ÛÛÛ °ÛÛÛ°ÛÛÛÛÛÛÛ  °ÛÛÛ °°°   ÛÛÛÛÛÛÛ °ÛÛÛ °°°  °ÛÛÛ °ÛÛÛ °ÛÛÛ °ÛÛÛ °ÛÛÛ °ÛÛÛÛÛÛÛ °°ÛÛÛÛÛ \n°°ÛÛÛ     ÛÛÛ  °ÛÛÛ °ÛÛÛ°ÛÛÛ°°°   °ÛÛÛ      ÛÛÛ°°ÛÛÛ °ÛÛÛ  ÛÛÛ °ÛÛÛ °ÛÛÛ °ÛÛÛ °ÛÛÛ °ÛÛÛ °ÛÛÛ°°°   °°°°ÛÛÛ\n °°°ÛÛÛÛÛÛÛ°   °ÛÛÛÛÛÛÛ °°ÛÛÛÛÛÛ  ÛÛÛÛÛ    °°ÛÛÛÛÛÛÛÛ°°ÛÛÛÛÛÛ  ÛÛÛÛÛ°°ÛÛÛÛÛÛ  ÛÛÛÛ ÛÛÛÛÛ°°ÛÛÛÛÛÛ  ÛÛÛÛÛÛ \n   °°°°°°°     °ÛÛÛ°°°   °°°°°°  °°°°°      °°°°°°°°  °°°°°°  °°°°°  °°°°°°  °°°° °°°°°  °°°°°°  °°°°°°  \n               °ÛÛÛ                                                                                      \n               ÛÛÛÛÛ                                                                                     \n              °°°°°                                                                                      ");
    printf("\n\t\t\t\t  ÛÛÛÛÛÛ   ÛÛÛÛÛÛ  ÛÛÛÛÛÛÛÛ  \n\t\t\t\t ÛÛÛ°°ÛÛÛ ÛÛÛ°°ÛÛÛ°°ÛÛÛ°°ÛÛÛ \n\t\t\t\t°ÛÛÛ °°° °ÛÛÛ °ÛÛÛ °ÛÛÛ °ÛÛÛ \n\t\t\t\t°ÛÛÛ  ÛÛÛ°ÛÛÛ °ÛÛÛ °ÛÛÛ °ÛÛÛ \n\t\t\t\t°°ÛÛÛÛÛÛ °°ÛÛÛÛÛÛ  ÛÛÛÛ ÛÛÛÛÛ\n\t\t\t\t °°°°°°   °°°°°°  °°°° °°°°° ");
    printf("\n\n\n\t\t ÛÛÛÛÛÛ   ÛÛÛÛÛÛ            ÛÛÛÛÛ               ÛÛÛ                           \n\t\t°°ÛÛÛÛÛÛ ÛÛÛÛÛÛ            °°ÛÛÛ               °°°                            \n\t\t °ÛÛÛ°ÛÛÛÛÛ°ÛÛÛ   ÛÛÛÛÛÛ   ÛÛÛÛÛÛÛ   ÛÛÛÛÛÛÛÛ  ÛÛÛÛ   ÛÛÛÛÛÛ   ÛÛÛÛÛÛ   ÛÛÛÛÛ \n\t\t °ÛÛÛ°°ÛÛÛ °ÛÛÛ  °°°°°ÛÛÛ °°°ÛÛÛ°   °°ÛÛÛ°°ÛÛÛ°°ÛÛÛ  ÛÛÛ°°ÛÛÛ ÛÛÛ°°ÛÛÛ ÛÛÛ°°  \n\t\t °ÛÛÛ °°°  °ÛÛÛ   ÛÛÛÛÛÛÛ   °ÛÛÛ     °ÛÛÛ °°°  °ÛÛÛ °ÛÛÛ °°° °ÛÛÛÛÛÛÛ °°ÛÛÛÛÛ \n\t\t °ÛÛÛ      °ÛÛÛ  ÛÛÛ°°ÛÛÛ   °ÛÛÛ ÛÛÛ °ÛÛÛ      °ÛÛÛ °ÛÛÛ  ÛÛÛ°ÛÛÛ°°°   °°°°ÛÛÛ\n\t\t ÛÛÛÛÛ     ÛÛÛÛÛ°°ÛÛÛÛÛÛÛÛ  °°ÛÛÛÛÛ  ÛÛÛÛÛ     ÛÛÛÛÛ°°ÛÛÛÛÛÛ °°ÛÛÛÛÛÛ  ÛÛÛÛÛÛ \n\t\t°°°°°     °°°°°  °°°°°°°°    °°°°°  °°°°°     °°°°°  °°°°°°   °°°°°°  °°°°°°");  
    menu();
	return 0;
}

void suma()
{
	int m1[3][3];
	int m2[3][3];
	int mf[3][3];
	int x,y; 
	printf("SUMA DE MATRICES\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("Ingrese valor en la Matriz A[%d,%d]:",x+1,y+1);
			scanf("%d",&m1[x][y]);
		}
		printf("\n");
    }
    for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("Ingrese valor en la Matriz B[%d,%d]:",x+1,y+1);
			scanf("%d",&m2[x][y]);
		}
		printf("\n");
    }
	printf("Matriz 1\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d ", m1[x][y]);
		}
		printf("\n");
    }
    printf("\n");	
	printf("Matriz 2\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d ", m2[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Suma de matrices\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			mf[x][y]= m1[x][y]+ m2[x][y];
			printf("%d ", mf[x][y]);
		}
		printf("\n");
	}
menu();
}

void resta()
{
	int m1[3][3];
	int m2[3][3];
	int mf[3][3];
	int x,y; 
	printf("RESTA DE MATRICES\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("Ingrese valor en la Matriz A[%d,%d]:",x+1,y+1);
			scanf("%d",&m1[x][y]);
		}
		printf("\n");
    }
    	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("Ingrese valor en la Matriz B[%d,%d]:",x+1,y+1);
			scanf("%d",&m2[x][y]);
		}
		printf("\n");
    }
	printf("Matriz A\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d ", m1[x][y]);
		}
		printf("\n");
    }
    printf("\n");	
	printf("Matriz B\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d ", m2[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Resta de matrices\n");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			mf[x][y]= m1[x][y]- m2[x][y];
			printf("%d ", mf[x][y]);
		}
		printf("\n");
	}
	menu();
}

void multiplicacion()
{	
	int i,j,k;
	int matrizA[3][3];
	int matrizB[3][3];
	int matrizC[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			matrizC[i][j]=0;
		}
		printf("\n");
    }
	printf("MULTIPLICACION DE MATRICES\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingrese valor en la Matriz A[%d,%d]:",i+1,j+1);
			scanf("%d",&matrizA[i][j]);
		}
		printf("\n");
    }
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingrese valor en la Matriz B[%d,%d]:",i+1,j+1);
			scanf("%d",&matrizB[i][j]);
		}
		printf("\n");
	}
 	for (i=0;i<3;i++)
	 {    
		for (j=0;j<3;j++)
		{ 
    		for (k=0;k<3;k++)
			{
				matrizC[i][j]=matrizC[i][j]+(matrizA[i][k]*matrizB[k][j]);
          	}
       	}
    }
    printf("Matriz A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", matrizA[i][j]);
		}
		printf("\n");
    }
    printf("\n");	
	printf("Matriz B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", matrizB[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Multiplicacion de matrices\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", matrizC[i][j]);
		}
		printf("\n");
	}


	menu();
}

void menu()
{
	int op;
   printf("\n1.-Suma\n2.-Resta\n3.-Multiplicaci%cn\n4.-Salir\n",162);
   scanf("%d", &op);
   system("cls");
   switch (op)
   {
	       case 1 :
            printf("\n   _  _  _  _                                                 \n _(_)(_)(_)(_)_                                               \n(_)          (_) _         _     _  _   _  _     _  _  _      \n(_)_  _  _  _   (_)       (_)   (_)(_)_(_)(_)   (_)(_)(_) _   \n  (_)(_)(_)(_)_ (_)       (_)  (_)   (_)   (_)   _  _  _ (_)  \n _           (_)(_)       (_)  (_)   (_)   (_) _(_)(_)(_)(_)  \n(_)_  _  _  _(_)(_)_  _  _(_)_ (_)   (_)   (_)(_)_  _  _ (_)_ \n  (_)(_)(_)(_)    (_)(_)(_) (_)(_)   (_)   (_)  (_)(_)(_)  (_)\n");
            printf("\nInserta la matriz A y la matriz B Para obtener la suma.\n");
            suma();
            break;

       case 2 :
		    printf("\n _  _  _  _                                    _                        \n(_)(_)(_)(_) _                                (_)                       \n(_)         (_) _  _  _  _      _  _  _  _  _ (_) _  _     _  _  _      \n(_) _  _  _ (_)(_)(_)(_)(_)_  _(_)(_)(_)(_)(_)(_)(_)(_)   (_)(_)(_) _   \n(_)(_)(_)(_)  (_) _  _  _ (_)(_)_  _  _  _    (_)          _  _  _ (_)  \n(_)   (_) _   (_)(_)(_)(_)(_)  (_)(_)(_)(_)_  (_)     _  _(_)(_)(_)(_)  \n(_)      (_) _(_)_  _  _  _     _  _  _  _(_) (_)_  _(_)(_)_  _  _ (_)_ \n(_)         (_) (_)(_)(_)(_)   (_)(_)(_)(_)     (_)(_)    (_)(_)(_)  (_)\n");
            printf("\nInserta la matriz A y la matriz B Para obtener la resta.\n");
		    resta();
		    break;
		
	   case 3 :
            printf("\n _           _                 _  _                    _                  _  _        _                                           _                                \n(_) _     _ (_)               (_)(_)                  (_)                (_)(_)      (_)                                         (_)                               \n(_)(_)   (_)(_) _         _      (_)  _       _  _  _  _     _  _  _  _     (_)    _  _      _  _  _   _  _  _        _  _  _  _  _       _  _  _     _  _  _  _   \n(_) (_)_(_) (_)(_)       (_)     (_) (_)_  _ (_)(_)(_)(_)   (_)(_)(_)(_)_   (_)   (_)(_)   _(_)(_)(_) (_)(_)(_) _   _(_)(_)(_)(_)(_)   _ (_)(_)(_) _ (_)(_)(_)(_)_ \n(_)   (_)   (_)(_)       (_)     (_)   (_)(_)         (_)   (_)        (_)  (_)      (_)  (_)          _  _  _ (_) (_)           (_)  (_)         (_)(_)        (_)\n(_)         (_)(_)       (_)     (_)   (_)            (_)   (_)        (_)  (_)      (_)  (_)        _(_)(_)(_)(_) (_)           (_)  (_)         (_)(_)        (_)\n(_)         (_)(_)_  _  _(_)_  _ (_) _ (_)          _ (_) _ (_) _  _  _(_)_ (_) _  _ (_) _(_)_  _  _(_)_  _  _ (_)_(_)_  _  _  _ (_) _(_) _  _  _ (_)(_)        (_)\n(_)         (_)  (_)(_)(_) (_)(_)(_)(_)(_)         (_)(_)(_)(_)(_)(_)(_) (_)(_)(_)(_)(_)(_) (_)(_)(_) (_)(_)(_)  (_) (_)(_)(_)(_)(_)(_)  (_)(_)(_)   (_)        (_)\n                                                            (_)                                                                                                    \n                                                            (_)                                                                                                    \n");
		    printf("\nInserta la matriz A y la matriz B Para obtener la multiplicacion.\n");
		    multiplicacion();
		    break;
	 
       case 4:
            printf("\n      ....        .                                         .                   .x+=:.         \n   .x88* `^x~  xH(`                                        @88>                z`    ^%        \n  X888   x8 ` 8888h      .u    .                           %8P                    .   <k       \n 88888  888.  %8888    .d88B :@8c        u           .      .          u        .@8Ned8*       \n<8888X X8888   X8?    =*8888f8888r    us888u.   .udR88N   .@88u     us888u.   .@^%8888*        \nX8888> 488888>*8888x    4888>'88*  .@88 *8888* <888'888k ''888E` .@88 *8888* x88:  `)8b.       \nX8888>  888888 '8888L   4888> '    9888  9888  9888 'Y*    888E  9888  9888  8888N=*8888       \n?8888X   ?8888>'8888X   4888>      9888  9888  9888        888E  9888  9888   %8*    R88       \n 8888X h  8888 '8888~  .d888L .+   9888  9888  9888        888E  9888  9888    @8Wou 9%     .  \n  ?888  -:8**  <888*   ^*8888**    9888  9888  ?8888u../   888&  9888  9888  .888888P`    .@8c \n   `*88.      :88%        *Y*      *888***888*  *8888P'    R888* *888***888* `   ^*F     '%888*\n      ^*~====**`                    ^Y*   ^Y'     *P'       **    ^Y*   ^Y'                ^*  \n");
            printf("\n                                             `.,,:'+XQQQQQQQQQQQQQQQQX+';:,,`                                           \n                            `,+QQQQX':`          .                                `;+QQQ;,                              \n                   ,XQQ+:       `     Q ` Q Q  QX QXQQ Q`.      Q Q , ; :Q Q ,Q+ Q  ,         ;XQQ,`                    \n           ,QQQ'      ``  QQ `Q Q     Q.X Q Q  Q+ Q+QQ QQ,     'Q Q . .` Q Q` Q .Q;QQ Q:    QQ        'QQ'`             \n     ,QQ.      ':X Q` Q  'Q Q`Q Q '   QQQ` XQ  Q' Q; Q QQ,     QX Q``` ; Q. Q '+ XQQ' X,   . Q    Q QX X`   ,QQ:        \n   Q     X +Q ,X Q Q Q Q Q' Q` QQ Q   + Q..Q: QQ` Q. Q` ':`    X .X, , ; Q' Q..Q `Q  Q,.   QQQ    Q Q Q  QQ X '   +Q    \n  Q   Q ,QQQ +Q, Q` XX  QQ ,Q  Q``Q                                         . Q:' Q; '     Q .   X+QQ Q, Q Q Q: Q'   Q  \n  Q   , Q QQQQ Q:,  Q: QQ  X:         `,,'QQQQQQ++++'';;;;;;;'''+++XQQQQQQQQQ+:,`          Q+    Q'.Q'  ;Q QQ  + Q   Q  \n   Q   Q QQ Q , X X:      `,QQQ+,                                       . Q          .+XQQ;,        `Q,`.Q: Q  Q ,  X`  \n    Q   ,Q '      ,XQQ+`.Q             :QQQ ,Q`                        Q,Q:+QQX               Q;+QQ;.     ' XQQ Q  Q    \n     '      'QQ:          Q          , Q     ;X                        Q  Q QQQQQ            +          +QX.   ,  ;     \n     Q  QX        ,;QQX,   Q     ' '; Q.Q QQ   Q                       `QX  QQQQQQQQQX.     ,   `,,,.`        +Q'`Q     \n      QQQQQQQQ'`      QQ ;Q;Q  Q Q Q. QQQ:     Q+                 Q.      Q`  :Q Q     Q   Q Q:''        `'QQQ:,+Q      \n     ,QQQQQQQ':,,,+QX       Q X`Q`   Q`'QQ   ``Q+                   'XQQ;X'QQQQQ ,QQQ;QQQ  Q     'Q+:,,,;+XQQQQQQ+,`    \n   QQX+,`                 ,Q   'Q QQQ  QXQ' Q:+Q  Q              QQQX'  ;Q    QQQQX,Q, +   Q                         Q  \n  Q  '    ;QQQQQQQQQQQQQQ'               Q  QQ Q; Q                XQQQQ +QQ `Q              XQ,,QQQQQQQQQQQQQQ    .QXQ \n  +  Q  .QQQQQQQQQQQQQQQQ                 Q Q   Q ,`                .Q' ;Q Q:Q+                `QQQ'XQQQQQQQXQQQQ  `, ' \n   QQ  QQQQQQQQQQ   QQQ+                  X ;`Q`Q QQ           QQQQ'  .QQ QQ XX                 QQ;   QQQQQ`+X+QQQQ QQ  \n       QQQQQQQQQQ :QQQQ                   '.;.: XQ+`            Q+,;QQ.QQQ 'QQQ                  QQQ  QQQ X.   QQQQQ    \n          ,QQQQQQ; ;QQQQ                 Q QQ X ,Q`XX               .Q'  Q QQQQ.                QQQ: QQ+X    ,QQQQQQ    \n     QQQ      +QQQQ  QQQQQ;           :' QQ.QQQQQQ`, Q         QQQQ;   +Q Q  QQQQ, ;.         `QQQ .QQ Q  .QQQQQ.   .   \n    Q QQ  QQ     +QQQ  QQQQQQQ:     QX Q Q QQ QQ XXQQ Q         QQ,:QQX`QQ QQQ QQQQ+        QQQQ'.QQ+,  QQQQQ    Q  Q   \n       Q Q`QQ QQ`   'QQ, `QQQQQ                 `                                       .   X, QQQ+   QQQQ  Q+;  Q  Q   \n   Q     '+;;QX Q;QQ`  +QQ    ;XQ       XQQQ.  'Q;  ,'+'.          ;,   .    `:,      Q QQQ   Q:   ,QQQ:  Q Q '  Q  Q   \n   Q XQ          QQ, ;Q +Q   QQ Q       QQQQQ QQ QQ  QQXQ`        `XQQ `QQ    Q+      Q . QQ`  QQQQQ ' Q;`Q QQQ  QQQQ   \n   Q ,Q : +Q          .`;QQ QQ 'Q +     QQ    QQ QQ  Q+QQ        ,:  QQ` QQ   Q;      Q QQ QQ  .``Q Q;.Q.QQ +QQ   ++    \n  ,Q+ Q X  'Q, +Q  +       QQ Q+Q   Q                                            Q  ..Q Q . QQ Q.`QQ; ;             .,  \n  XQQ Q Q:``Q+;`Q',:Q;`  ; Q    Q `+QQ`+QQQQ,                                  Q QQQQ.Q     QQ    . .  Q Q ;:: Q Q  Q.  \n  Q+Q`Q QQQ QQQ QQQ QQ'  Q:Q QQ`Q Q,   X Q`QQQQQ                               X QQQQ.Q QQXQ:Q:Q.`Q ,: Q Q.,:, Q Q ,Q`  \n  QQQ'X QQQ Q;Q Q Q Q Q QQQQ QQ Q Q    X QQQQQQQ,                              X `    Q QQQQ Q+Q; Q `; Q Q, ;;`Q Q .Q   \n  QQ Q: Q Q QQQ QQQ  +'   QQ    Q QQQQQX  X`QQQQ+   ;Q  .'+.                   Q      Q  X:  QQXQ QQ 'QQ Q+ :Q Q Q  Q   \n  QQQQ  QQQ  :         Q;+QQ QQ+Q.Q   QQ     QQQQQQQQQ    :QQQ                 Q ;Q`  Q QQQQXQ'       '  QQ :QQ, QX+Q   \n              : ; Q Q ;Q,'QQ Q.QQ ,    Q       ++.QQQX.      'QX ,QQ           Q  Q`Q'Q QQQ QQ   . .   ,         +QQ,   \n  `     Q + X'Q: ;Q`Q QQ X:Q+`  Q`QQQQQQ            :QQQ              ,        Q QQ+  Q  QQ QQ:  Q Q , Q Q Q , Q .  Q.  \n  Q  Q  Q Q,+QQ+ Q,XQ Q``Q QQ   Q      Q               XQQQ.QQQ.               Q.;    Q '+ QQQX; Q Q`. Q`Q`Q : Q Q  Q.  \n  Q  Q  Q Q':Q:Q Q Q,.Q QQ QQ QQQ QQQQQQ                  XQQQQQQQQQ           Q,X  X.Q QQ:QQ QQ., Q'`';X.;'.: Q Q  Q   \n  Q  Q  Q QQ`Q`Q Q Q Q:'QQ QQQQXQ`` Q  Q                  QQQQQQQQQQQQ:        Q.QQ. +Q Q QQ+ QXQ +.Q Q Q Q,+:,Q Q  Q   \n  Q  Q  Q QQ Q Q Q Q Q Q Q `QQ  Q QQQQQQ                 QQQQQQQQQQQQQQ X      Q``'QQXQ  QQQ  Q Q Q Q Q Q Q Q.;Q Q  Q   \n  Q  Q` Q,+Q Q Q Q:Q.,XQ    QQQ Q `   `Q                QQQQQQQQQQQQQQQQQQ.    Q ;  QQQ `QQ    '`X` 'X. Q Q Q`XQ Q  Q   \n  Q  Q: Q':Q Q Q QQ'Q QQ    QQQ Q QQQQQQ                QQQQQQQQQQQQQQQQQQQQX  Q`     Q QQQ    Q;Q + Q `Q Q Q QQ Q  Q   \n  Q  Q+ QQ`Q Q Q  Q Q  QQ    QQQQ QQ   Q                `QQQQQQQQQQQQQQQQQQQQQ Q  Q.  Q`QQ.   QQX  QQ  Q; Q Q Q; Q  Q   \n  Q  QQ ;Q Q `QQ  +QQ   Q    QQQQ ` ; .Q                 QQQQQQQQQQQQQQQQQQQQQ Q  QQQ:QQQQ   ;Q   .QQ  Q Q  Q Q`.Q ,Q   \n  Q, QQ  Q Q  QQ'  QQ    .Q,QQQQQ QQQQQQ                  QQQQQQQQQQQQQQQQQQQ+ Q,QQ   QQQQ        QQ   Q Q  Q Q +Q QQ   \n  QX QQ  Q Q  QQQ   Q   'QQQQQQ:Q`+ .+ Q                  ;QQQQQQQQQQQQQQQQQQ  Q+     XQQQ,QQ.   QQ    QQ   Q Q QX Q:   \n  ;Q QQ  Q;Q:  QQ        QQQQQ' Q`+QQ+QQ                    +QQQQQQQQQQQQQQQQ  Q      , QQQQQQ  '+    QQ;  ;Q Q Q  Q    \n   Q QQ  QQQ+   Q               , QQ .QQ                    QQQQQQQQQQQQQQQQ,  +         QQQQ         Q+   'XQ, Q 'Q    \n   Q +Q   Q,Q            XQQQQ   Q     `;                  ;QQQQQQQQQQQQQ;    . QQQQQQ  Q            Q,     QQ  Q Q+    \n   QQ;Q   QQQ   .QX.   QQQQQ  Q' Q`Q  Q Q                  XQQQQQQQQQQQQ      Q  Q Q ,  Q QQQQ.             QQ ;: Q     \n    Q.Q    QQ  QQQQQQQQQQQ    QQ `:Q +QQ`;                 QQQQQQQQQQQ'      + QQQQ'Q;;QQ; QQQQQX  `.`     .Q  Q QQ     \n    Q Q:    Q  :QQQQQQQQ`         QQQ. . Q                ;QQQQQQQQQ`       ; Q   QQ  QQQX  `QQQQQQQQQQQ   +Q  Q Q      \n     XQ+       ;. .XQQQQ   `Q'Q,   X      Q               QQQQQQQQQ        . +Q:   `QQ`Q Q    QQQQQQQQQ    Q   QQQ      \n     QQQ             QQQQ   ,XQQQQ Q       Q              QQQQQQQ         + QQXQ: '.QQQQQQ     QQQ.   Q;       QQ       \n      QQ             ,QQQ   QQQQ:   Q     Q X             QQQQQ          Q X     Q  ':.       ,QQQ            :QQ       \n      QQ             QQQ  ``     +X  Q    QQ Q           QQQQQX         QXQQ    X QQ.Q Q.Q`    QQQ            QQ        \n       Q            X'          `;  Q QQQQ' ::Q          ;QQQ`        ; Q  QQQ,;  Q QX.,Q Q     QQ`           Q.        \n       Q                 QQ  `         Q` .;,+QX`        'QQQ        Q  QQQ,XQ    X ;. .                     QQ         \n         .Q              QQ; Q Q;`.Q Q  Q Q+QQ;` Q        QQQ      Q XQQ    Q  +         ` Q                 Q       XQX\n ;Q   QQQ  QQ    ;+`     QQ QQ Q:QQQ Q ;.`+Q,      Q       ``    Q  Q  QQXQ: , Q: Q.Q QQ+Q Q;                      QQQ  \n QQ;` Q``QQQQ:QQQ'.Q     .QQQQ QQQQQ QQQQ: Q      ;Q Q`       `Q  Q     .Q XQ`;QQ XQ;QQ Q  QQ            .        Q;  Q \n Q: Q   QQ QX    Q,                   XQX    Q    QQ` ,'Q` ,Q.,Q QQ    Q   +QQQQQ  QQQ' .QQX              QQQQ `QQQQQQ  \n QQ'QQQQQ;:QQX,'QXQ        QQ                 :+  QQQ   Q ;   'QQ:X  Q                                    Q  QQ;     Q  \n  'Q     Q,    Q Q`Q`     Q  :,                 ,Q      QQXQ     :`Q                                        QX     , Q  \n QQ  ` `  QQ  Q     Q  `QQ     `Q        ,+':      Q`  'Q QQ    QX                 QQXQ`        :QQQQQ    'Q     Q  Q+  \n  Q        QQQ Q,Q:X XQQ         +.  QX      :Q      ,Q` XQQ 'Q                   Q  Q;Q    `QQ,      QQX; +Q.Q   :Q    \n  QQ    Q,  QQ      QQ+Q +         QQ'         Q+        QQQ                 XQX+QQX  Q    QQ  .X Q;  Q`````.:QQQX      \n   QQ        Q   `Q'    X QQ Q Q  Q Q++Q` Q Q Q :Q`                        +Q Q,    Q,    Q     QQ  `  ;Q               \n    QQ`  Q  Q+Q+Q  ,            Q :     `QQ    `   QQ                     Q'   ,` ; Q    Q `+    `    +Q                \n      XQ+     Q:       ,  `             Q  QQ        `QQ'     'QQQQX     Q; .+      Q   +Q   Q`    `QQ                  \n         Q+   ,Q ,Q       Q  Q  Q ;Q QQ  Q   `QQ  , Q +,  ;;:       XQ` ,Q   Q;  Q QQ   Q  .    QQQX                    \n          QQ  ,QQQQQQQ                      `QQQQQ;         Q  Q ;  X `QQ     `   Q     Q    QQ`                        \n        QQ.   .    ,  QQ   Q  Q   '  Q:  Q Q,`Q+ Q QQ     ,X X       Q :+       QQ     ;Q  QQ        `;QQQ:             \n       XQ  `           QQ ;`  ,QQQQQQQQ:  Q+.Q QQQ   +Q ,        ` Q   Q `X  QQQ   :'QQQXXXQQ,:QQQQX        ,QX         \n       Q`          `Q    QQ:;Q          XQQ` Q         QQ         ``  Q   .Q:   QQQX       QX   ;             ,Q        \n        Q  Q     .     Q    Q  QQ   Q+     QQ .QQQQQQQQQQQ    QQ;   ;QQ  +Q:QQQQ  `   Q    Q       Q     .Q    +Q       \n      Q+XQ        Q        Q;      Q    :  Q'+Q  QQQQ'  'QQQQ:  :   Q  QQQ,  X              +QQQQ,          Q   :       \n     QQ  QXQQ`       `,QQQQQQ               QQ  XQ,  .Q   QQ,  Q       '          ;X    Q    Q     QQ    +    `Q        \n     ;QQQ       XQ.` :Q     QQ `    Q       QQQ    QQ .Q QQQQ         ++    X  .           QQ        `QQQQQQQQ:         \n     Q                       QQQ        ;QQ   Q+ Q ;QQQ XQ    QQQ     :Q   `+QQQ`       :QQ                             \n                                'QQQQQQ      QQ  Q Q:QQQ QQQQ    QQ.QQ'           :+XX;                                 \n                                            QQ`XQQ Q    XQQ+ QQ.QX QQ                                                   \n                                           X.     QX           QQ ;QQQQQ                                                \n");
            break;
			default:
            	menu();
				}
}
