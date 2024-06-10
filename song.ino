//Definición de variables
int altavoz = 11;  //pin salida del altavoz, el otro pin del altavoz es GND

//octava alta
int Do3 =2080;
int Si2 =1975;
int LaS2=1864;
int La2= 1760;
int SolS2=1661;
int Sol2=1567;
int FaS2=1479;
int Fa2= 1396;
int Mi2= 1318;
int ReS2=1244;
int Re2= 1174;
int DoS2=1108;
int Do2= 1046;

//octava baja
int Si = 987;
int LaS= 932;
int La = 880;
int SolS=830;
int Sol= 783;
int FaS= 739;
int Fa=  698;
int Mi=  659;
int ReS= 622;
int Re = 587;
int DoS =554;
int Do = 523;
int Silencio = 0;

//definimos las notas
int redonda=0;
int redondap=0;
int blanca= 0;
int blancap=0;
int negra=0;  
int negrap=0;
int corchea=0;
int corcheap =0;
int semicorchea=0;
int semicorcheap=0;

//definimos la variable del tiempo
int bpm= 155;


void setup()
{
pinMode(altavoz,OUTPUT);
//definimos la relacion de tiempo entre las notas
  
      negra= 60000/bpm; 
      negrap=negra*1.5;
      blanca= negra*2;
      blancap=blanca*1.5;
      redonda= negra*4;
      redondap= redonda*1.5;
      corchea= negra/2;
      corcheap=corchea*1.5;
      semicorchea= negra/4;
      semicorcheap=semicorchea*1.5;  
 
}

void loop()
{

//escribimos las notas con el siguiente esquema
// intro
 tone(altavoz,Do,blanca);
 delay(blanca+50); 
 tone(altavoz,ReS,blanca);
 delay(blanca+50);
 
 tone(altavoz,Fa,negra);
 delay(negra+50);
 tone(altavoz,ReS,blanca);
 delay(blanca+50);
 tone(altavoz,Fa,negra);
 delay(negra+50);  

 tone(altavoz,Fa,blanca);
 delay(blanca+50);
 tone(altavoz,LaS,negra);
 delay(negra+50);
 tone(altavoz,SolS,negra);
 delay(negra+50);

 tone(altavoz,Sol,negra);
 delay(negra+50);
 tone(altavoz,Fa,negra);
 delay(negra+50);
 tone(altavoz,Sol,blanca);
 delay(blanca+50);

 tone(altavoz,Sol,blanca);
 delay(blanca+50);
 tone(altavoz,LaS,blanca);
 delay(blanca+50);

 tone(altavoz,Do2,negra);
 delay(negra+50);
 tone(altavoz,Fa,blanca);
 delay(blanca+50);
 tone(altavoz,ReS,negra);
 delay(negra+50);

 tone(altavoz,LaS,negra);
 delay(negra+50);
 tone(altavoz,LaS,negra);
 delay(negra+50);
 tone(altavoz,Sol,negra);
 delay(negra+50);
 tone(altavoz,LaS,negra);
 delay(negra+50);

 tone(altavoz,LaS,blanca);
 delay(blanca+50);
 tone(altavoz,Do2,redondap);
 delay(redondap+50);

// bridge
//comp1
 tone(altavoz,Do,negra);
 delay(negra+50);
  tone(altavoz,ReS,corcheap);
 delay(corcheap+50);
  tone(altavoz,ReS,semicorchea);
 delay(semicorchea+50);
  tone(altavoz,Fa,corcheap);
 delay(corcheap+50);
  tone(altavoz,ReS,corcheap);
 delay(corcheap+50);
 tone(altavoz,Fa,corchea);
 delay(corchea+50);

 //comp2
 tone(altavoz,Fa,corchea);
 delay(corchea+50);
 tone(altavoz,Fa,corchea);
 delay(corchea+50);
 tone(altavoz,LaS,corchea);
 delay(corchea+50);
 tone(altavoz,SolS,corchea);
 delay(corchea+50);
 tone(altavoz,Sol,semicorchea);
 delay(semicorchea+50); 
 tone(altavoz,Fa,corchea);
 delay(corchea+50);
 tone(altavoz,Sol,corcheap);
 delay(corcheap+50);
 tone(altavoz,Silencio,semicorchea);
 delay(semicorchea+50);

 //comp3
 tone(altavoz,Sol,negra);
 delay(negra+50);
 tone(altavoz,LaS,corcheap);
 delay(corchea+50);
 tone(altavoz,LaS,semicorchea);
 delay(semicorchea+50);
 tone(altavoz,Do2,corcheap);
 delay(corcheap+50);
 tone(altavoz,Fa,corcheap);
 delay(corcheap+50);
 tone(altavoz,ReS,corchea);
 delay(corchea+50);

 //comp4
 tone(altavoz,LaS,corchea);
 delay(corchea+50);
 tone(altavoz,LaS,corchea);
 delay(corchea+50);
 tone(altavoz,Sol,corchea);
 delay(corchea+50);
 tone(altavoz,LaS,corchea);
 delay(corchea+50);
 tone(altavoz,LaS,corcheap);
 delay(corcheap+50);
 tone(altavoz,Do2,negra);
 delay(negra+50);
 tone(altavoz,Silencio,semicorchea);
 delay(semicorchea+50);

//Verso

//comp1
tone(altavoz,ReS2,corchea);
delay(corchea+50);
tone(altavoz,LaS,corchea);
delay(corchea+50);
tone(altavoz,LaS,blanca);
delay(blanca+50);
tone(altavoz,LaS,semicorchea);
delay(semicorchea+50);

//comp2
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,LaS,corchea);
delay(corchea+50);
tone(altavoz,LaS,negrap);
delay(negrap+50);
tone(altavoz,LaS,corchea);
delay(corchea+50);

//comp3
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);
tone(altavoz,SolS2,corcheap);
delay(corcheap+50);
tone(altavoz,Sol2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);

//comp4
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);
tone(altavoz,SolS2,corcheap);
delay(corcheap+50);
tone(altavoz,Sol2,corchea);
delay(corchea+50);
tone(altavoz,Do2,negrap);
delay(negrap+50);
tone(altavoz,Do2,semicorchea);
delay(semicorchea+50);
tone(altavoz,Re2,semicorchea);
delay(semicorchea+50);


//comp5
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);
tone(altavoz,Re2,negrap);
delay(negrap+50);
tone(altavoz,ReS2,semicorchea);
delay(semicorchea+50);
tone(altavoz,Fa2,semicorchea);
delay(semicorchea+50);


//comp6
tone(altavoz,SolS2,corcheap);
delay(corcheap+50);
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,ReS2,negrap);
delay(negrap+50);
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);


//compas7
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,Mi2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,negra);
delay(negra+50);
tone(altavoz,Do2,negra);
delay(negra+50);


//compas8
tone(altavoz,Do2,negrap);
delay(negrap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);
tone(altavoz,Re2,negrap);
delay(negrap+50);
tone(altavoz,Silencio,corchea);
delay(corchea+50);

//Verso2

//comp1
tone(altavoz,ReS2,corchea);
delay(corchea+50);
tone(altavoz,LaS,corchea);
delay(corchea+50);
tone(altavoz,LaS,blanca);
delay(blanca+50);
tone(altavoz,LaS,semicorchea);
delay(semicorchea+50);

//comp2
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,LaS,corchea);
delay(corchea+50);
tone(altavoz,LaS,negrap);
delay(negrap+50);
tone(altavoz,LaS,corchea);
delay(corchea+50);

//comp3
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);
tone(altavoz,SolS2,corcheap);
delay(corcheap+50);
tone(altavoz,Sol2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);

//comp4
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);
tone(altavoz,SolS2,corcheap);
delay(corcheap+50);
tone(altavoz,Sol2,corchea);
delay(corchea+50);
tone(altavoz,Do2,negrap);
delay(negrap+50);
tone(altavoz,Do2,semicorchea);
delay(semicorchea+50);
tone(altavoz,Re2,semicorchea);
delay(semicorchea+50);


//comp5
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);
tone(altavoz,Re2,negrap);
delay(negrap+50);
tone(altavoz,ReS2,semicorchea);
delay(semicorchea+50);
tone(altavoz,Fa2,semicorchea);
delay(semicorchea+50);


//comp6
tone(altavoz,SolS2,corcheap);
delay(corcheap+50);
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,ReS2,negrap);
delay(negrap+50);
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);

//comp7
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,Mi2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,negra);
delay(negra+50);
tone(altavoz,Sol2,negra);
delay(negra+50);

//comp8
tone(altavoz,SolS2,blanca);
delay(blanca+50);
tone(altavoz,Sol2,blanca);
delay(blanca+50);

//Verso 3

//comp1
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);

//comp2
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corchea);
delay(corchea+50);
tone(altavoz,Re2,corcheap);
delay(corcheap+50);
tone(altavoz,Do2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);

//comp3
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corcheap);
delay(corcheap+50);
tone(altavoz,Do2,corchea);
delay(corchea+50);

//comp4
tone(altavoz,Fa,negra);
delay(negra+50);
tone(altavoz,Sol,negra);
delay(negra+50);
tone(altavoz,SolS,negra);
delay(negra+50);
tone(altavoz,LaS,negra);
delay(negra+50);

// comp5
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);

//comp6
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corchea);
delay(corchea+50);
tone(altavoz,Re2,corcheap);
delay(corcheap+50);
tone(altavoz,Do2,corcheap);
delay(corcheap+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);

//comp7
tone(altavoz,Sol2,corcheap);
delay(corcheap+50);
tone(altavoz,SolS2,corcheap);
delay(corcheap+50);
tone(altavoz,Sol2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,corcheap);
delay(corcheap+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);

//comp8
tone(altavoz,Sol2,blanca);
delay(blanca+50);
tone(altavoz,Silencio,blanca);
delay(blanca+50);  



//chorus

//comp1
tone(altavoz,Do2,negra);
delay(negra+50);
tone(altavoz,ReS2,negra);
delay(negra+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,ReS2,negra);
delay(negra+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);

//comp2
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,LaS2,corchea);
delay(corchea+50);
tone(altavoz,SolS2,corchea);
delay(corchea+50);
tone(altavoz,Sol2,semicorchea);
delay(semicorchea+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,Sol2,negrap);
delay(negrap+50);
//tone(altavoz,Silencio,corchea);
//delay(corchea+50);

//comp3
tone(altavoz,Sol2,negra);
delay(negra+50);
tone(altavoz,LaS2,negra);
delay(negra+50);
tone(altavoz,Do3,corchea);
delay(corchea+50);
tone(altavoz,Fa2,negra);
delay(negra+50);
tone(altavoz,ReS2,corchea);
delay(corchea+50); 

//comp4
tone(altavoz,Re2,corchea);
delay(corchea+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);
tone(altavoz,Do2,corchea);
delay(corchea+50);
tone(altavoz,Re2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,semicorchea);
delay(semicorchea+50);
tone(altavoz,ReS2,corchea);
delay(corchea+50);
tone(altavoz,ReS2,corcheap);
delay(corcheap+50);
tone(altavoz,Silencio,semicorchea);
delay(semicorchea+50);

//comp5
tone(altavoz,Do2,negra);
delay(negra+50);
tone(altavoz,ReS2,negra);
delay(negra+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,ReS2,negra);
delay(negra+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);

//comp6
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,LaS2,corchea);
delay(corchea+50);
tone(altavoz,SolS2,corchea);
delay(corchea+50);
tone(altavoz,Sol2,semicorchea);
delay(semicorchea+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,Sol2,negrap);
delay(negrap+50);
//tone(altavoz,Silencio,semicorchea);
//delay(semicorchea+50);

//comp7
tone(altavoz,Sol2,negra);
delay(negra+50);
tone(altavoz,LaS2,negra);
delay(negra+50);
tone(altavoz,Do3,corchea);
delay(corchea+50);
tone(altavoz,Fa2,negra);
delay(negra+50);
tone(altavoz,ReS2,corchea);
delay(corchea+50);

//comp8
tone(altavoz,LaS2,corchea);
delay(corchea+50);
tone(altavoz,LaS2,corchea);
delay(corchea+50);
tone(altavoz,Sol2,corchea);
delay(corchea+50);
tone(altavoz,LaS2,corchea);
delay(corchea+50);
tone(altavoz,LaS2,corcheap);
delay(corcheap+50);
tone(altavoz,Do3,negra);
delay(negra+50);
//tone(altavoz,Silencio,semicorchea);
//delay(semicorchea+50);

//comp9
tone(altavoz,Do2,negra);
delay(negra+50);
tone(altavoz,ReS2,negra);
delay(negra+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,ReS2,negra);
delay(negra+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);

//comp10
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,LaS2,corchea);
delay(corchea+50);
tone(altavoz,SolS2,corchea);
delay(corchea+50);
tone(altavoz,Sol2,semicorchea);
delay(semicorchea+50);
tone(altavoz,Fa2,corchea);
delay(corchea+50);
tone(altavoz,Sol2,negrap);
delay(negrap+50);
//tone(altavoz,Silencio,semicorchea);
//delay(semicorchea+50);

//comp11
tone(altavoz,Sol2,negra);
delay(negra+50);
tone(altavoz,LaS2,negra);
delay(negra+50);
tone(altavoz,Do3,corchea);
delay(corchea+50);
tone(altavoz,Fa2,negra);
delay(negra+50);
tone(altavoz,ReS2,corchea);
delay(corchea+50);

//comp12
tone(altavoz,LaS2,corchea);
delay(corchea+50);
tone(altavoz,LaS2,corchea);
delay(corchea+50);
tone(altavoz,Sol2,corchea);
delay(corchea+50);
tone(altavoz,LaS2,corchea);
delay(corchea+50);
tone(altavoz,LaS2,corcheap);
delay(corcheap+50);
tone(altavoz,Do3,negra);
delay(negra+50);
//tone(altavoz,Silencio,semicorchea);
//delay(semicorchea+50);


// wait for 30 milliseconds to see the dimming effect
 delay(30);

  
 delay(5000); //la cancion se repetira cada 5 segundos 
  
}
