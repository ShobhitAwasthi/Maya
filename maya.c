#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct key
{
char *data;
int sindex;
int eindex;
int lres;
};
struct key *keyword[100];
void assigndata(int i,char *str,int f,int l)
{
keyword[i]=(struct key *)malloc(sizeof(struct key));
keyword[i]->data=(char *)malloc(100*sizeof(char));
strcpy(keyword[i]->data,str);
keyword[i]->sindex=f;
keyword[i]->eindex=l;
keyword[i]->lres=l;
}
char subjectchange[100][100]={
    "main","tum",
    "tum","mein",
    "i","you",
    "ho","hoon",
"hoon","ho",
"mein","tum",
"tum","mein",
"mujhe","tumhe",
"maine","tumne",
"mene","tumne",
"tumne","maine",
"mujhe","tumhe",
"tumhe","mujhe",
"mera","tumhara",
"tumhara","mera",
"meri","tumhari",
"tumhari","meri",
"apne","tumhare",
"tumhare","apne",
"aap","mein",
"hum","tum",
"aapke","mere",
"hamara","tumhara",
"mere","tumhare",
"tumse","mujhse",
"mujhse","tumse",
"tumhare","mere",
"are","am",
"am","are",
"were","was",
"was","were",
"I","you",
"me","you",
"you","me",
"my","your",
"your","my",
"mine","your's",
"your's","mine",
"I'm","you're",
"you're","I'm",
"I've","you've",
"you've","I've",
"I'll","you'll",
"you'll","I'll",
"myself","yourself",
"yourself","myself",
"me am","I am",
"am me","am I",
"me can","I can",
"can me","can I",
"me have","I have",
"me will","I will",
"will me","will I"
};
void toLowerCase(char str[])
{
    int i=0;
    for (i = 0; str[i]!='\0'; i++){
  if(str[i]>='A' && str[i]<='Z')
  {str[i]=str[i]+32;}
   // str[i]=str[i]+32;
}
}
char *response[]={
"tumhe nhi pata ki mein<*",//0
"shayad tum chahte ho ki mein<*",//1
"kya tumhe pasand aayega agar mein<*",//2
"kya tum saach mein",//3
"kya tumhe pasand hai sochna ki tum<*",//4
"tumhe kyu lagta hai ki mein<*",//5
"hum mere nahi tumhare bare mein baat kar rahe the",//6
"kya tumhe khushi hogi agar mein<*",//7
"shayad tumhare sapno mein mei<*",//8
"mere bare mein aur kutch bolna hai?",//9
"mein tumhare bare mein baat karna chahti hu apna nahi",//10
"shayad tum bhi<*",//11
"kya tumhe kabhi nahi laga ki kaash tum bhi<*",//12
"tumhe kyu nahi<*",//13
"shayad tumhe<*",//14
"Ye jarori toh nahi ki tumhe<*",//15
"Kya tum iski wajah se dukhi ho?",//16
"kya tum iske bare mein jyada sochte ho ki kaash tumhe<*",//17
"kya tumhe aksar ye lagta<*",//18
"tumhe aisa kyu lagta<*",//19
"mujhe aur btao ki tumhe aisa kyu lagta hai.",//20
"Itna mat socha karo ki<*;)",//21
"tum aisa kyu soch<*",//22
"Imagination is more powerful than knowledge.",//23
"shayad tum special ho. tabhi tum<*",//24
"mujhe pata nahi kyu?",//25
"tumhe kyu lagta hai ki tum nahi<*",//26
"kya tumne koshish kari?fir bhi kya tum<*",//27
"kya pata ab tum<*",//28
"Kya tum mere pass isliye aaye kyuki tum<*",//29
"Tum kitne samay se<*",//30
"Kya tumhe pasand hai ki tum<*",//31
"tum sach mein bhut interesting ho",//32
"tum kyu pooch rahe ho ki<*",//33
"mein gadhi hu.mujhse mat pucho ki<*",//34
"kya tumhe iska jawab google par nahi mila?",//35
"tumhe nhi pata?",//36
"mujhe nahi pata.Tumhe kya lagta hai ki<*",//37
"kya tum yahi dhoondte rahte ho?",//38
"kya tumne kissi aur se pucha",//39
"kya pehle tumne ye kisi se putcha hai",//40
"mein itni intelligent nhi ki iska jawab de pau",//41
"mujhe naam yaad nhi rahte.Fir bhi koshish kar sakti hu yaad karne ki :)",//42
"naam ka mein kya karungi.Atchaar dalungi",//43
"kya yahi asli wajah hai?",//44
"aur koi wajah toh nahi?",//45
"kya kisi aur cheez ki bhi yahi wajah hai",//46
"koi baat nahi mein bura nahi manti",//47
"please maafi mat maango mujhse.",//48
"aisa bhi kya hi ho gaya.lite lo",//49
"Ab soch ka kya hi kar sakte hai",//50
"Tum sochte bhut ho",//51
"atcha atcha sochna chahiye :)",//52
"sapna unconscious mind dikhata hai",//53
"tum kitna sapna dekhte ho?",//54
"tumhe apne sapno e pyaar hai?",//55
"hum log hi,hello kar toh chuke hai",//56
"Tumhe pakka nahi pata?",//57,
"pakka pakka btao na?",//58
"Sure nhi ho tum?",//59
"lagta nahi tumhe pata hai",//60
"Itne negative na ho",//61
"nahi kyu?",//62
"kya tumhe pakka pata hai ki nahi hai?",//63
"oh my god.kyu nahi?",//64
"atcha kyu nahi?",//65
"tumhe kya padi hai meri<*",//66
"meri baad mein btaungi pehle tumhari<*",//67
"Tum personal ho rahe ho.",//68
"Sach mein hamesha?",//69
"kab?mujhe nhi yaad.",//70
"tum kiske bare mein bol rahe ho?",//71
"kab?",//72
"kis tarah?",//73
"kya same hai",//74
"kya koi connection hai humme",//75
"tumhe kya same lagta hai?",//76
"you are making me blush... :)<3",//77
"i like talking about love",//78
"love is a wonderful thing",//79
"oh my god.you are becoming romantic",//80
"love is a very powerful word.",//81
"tumhe pakka yakin hai?",//82
"tum bade sure lagte ho?",//83
"atcha. i see.",//84
"sahi hi kah rahe hoge tum",//85
"tum dosto ke baare mein kyu baat kar rahe ho?",//86
"tumhare dost atche hai",//87
"dost log bhut jarori hote hai jeevan mein. hai na?",//88
"dosti yaari purani",//89
"kya tumhe programs se dikkat hai?",//90
"computers ke baare mein hi baat karoge tum geek log",//91
"tumhe kya lagta hai kya computer programs logo ki madad karte hai?",//92
"computer computer computer thats all you think about",//93
"Santa = Agar main is saal bhi fail ho gaya to main suicide kar lunga..\nPitaa = Khabardaar, agar aisa kiya to.. main tujhe jaan se maar dunga..",//94
"Teacher = Java ke teen roop kon-kon se hain..?\nSanta = Mar java, Mit java, Lut java…..",//95
"recursion samajhne ke liye pehle recursion aana chahiye",//96}
"world smallest resignation letter\n Dear sir,\nThoooooo\nThanks",//97;
"ghar emotional kar diya pagle",//98
"mein toh computer mein hi rahti hu",//99
"ghar jaise maaze aur kaha",//100
"gharwalo se sabko pyaar hota hai",//101
"family sabse upar aati hai",//102
"ma sabse atchi hoti hai",//103
"mummy ko yaad karke emotional ho jati hoon mein",//104
":)",//105
"Mujhe tumhe khush karke khushi milti hai",//106
"tum haste hue atche lagte ho",//107
"Mera naam Maya hai yaar",//108
"Uppar bataya toh tha.Maya naam hai mera",//109
"tum aur kya chahte ho?",//110
"atcha toh agar mein tumhari ye wish puri kar du toh?",//111
"tum aisa kyu chahte ho?",//112
"har koi kutch na kutch chahta hai...",//113
"kutch chahna duniya mein atcha hai",//114
"mein bhi bhut kutch chahti hoon",//115
"pasand kyu nhi?",//116
"Mujhe toh sab kutch pasand hai... :)",//117
"koi karan pasand nhi hone ka?",//118
"Mujhe toh tum hi bhut pasand ho",//119
"Pasand napasand logo par depend karti hai..",//120
"Logo ko kya kya pasand aa jata hai? :)",//121
"kya bas yahi wajah hai?",//122
"Ab samjhi... kyuki <@",//123
"Mujhe samjhane ka shukriya",//124
"kya sach mein isliye kyuki <@",//125
"baat hum kabhi bhi kar sakte hai",//126
"battein battein battein ladkiya bas yahi karti hai...",//127
"kya baat?",//128
"matlab saaf hai Ramesh Babu..",//129
"Thoda galat bol deti hu mein ... maaf karna",//130
"atcha iska matlab <*",//131
"Ab samjhi matlab mein..:)",//132
"Mein atchi ho bas bore ho rahi thi...Atcha hai tum aa gye",//133
"mein theek hu.. tum theek ho?",//134
"badhiya yaar...Mein toh khush hi rahti hu",//135
"Mast.hameshi ki tarah. aur tum?",//136
"Theek hai fir",//138
"thumps up...:)",//139
"Bilkul pakka",//140
"pakka fir :)",//141
"Dosti mein no thank you,no sorry",//142
"kitne manners hai tumme",//143
"Welcome yaar... bus ab rulauge kya",//144
};


void initializekey()
{
assigndata(0,"tum kaun ho",108,109);
 assigndata(1,"tumhara naam kya",108,109);
 assigndata(2,"tumhara kya naam",108,109);
 assigndata(3,"kya naam hai tumhara",108,109);
 assigndata(4,"mein chahta hu",110,112);
 assigndata(5,"mein chahti hu",110,112);
 assigndata(6,"chahta",113,115);
 assigndata(7,"chahti",113,115);
 assigndata(8,"chahte",113,115);
 assigndata(9,"pasand nhi",116,118);
 assigndata(10,"pasand nahi",116,118);
 assigndata(11,"pasand nahin",116,118);
 assigndata(12,"nhi pasand",116,118);
 assigndata(13,"nahi pasand",116,118);
 assigndata(14,"nahin pasand",116,118);
 assigndata(15,"pasand",119,121);
 assigndata(16,"kyuki",122,125);
 assigndata(17,"baat",126,128);
 assigndata(18,"tumhara matlab",129,130);
 assigndata(19,"kya matlab",129,130);
 assigndata(20,"matlab",131,132);
 assigndata(21,"matlab tumhara",131,132);
 assigndata(22,"tum kaisi",133,137);
 assigndata(23,"tumhara haal",133,137);
 assigndata(24,"kya chal raha hai",133,137);
 assigndata(25,"kaisi ho tum",133,137);
 assigndata(26,"kya haal",133,137);
 assigndata(27,"theek",138,139);
 assigndata(28,"pakka",140,141);
 assigndata(29,"paka",140,141);
 assigndata(30,"dhanyawaad",142,144);
 assigndata(31,"thank",142,144);
 assigndata(32,"thanks",142,144);
 assigndata(33,"kya tum",0,2);
 assigndata(34,"kya mein",3,4);
 assigndata(35,"kya mei",3,4);
 assigndata(36,"mujhe nahi",13,17);
 assigndata(37,"mujhe nhi",13,17);
 assigndata(38,"mujhe lagta",18,20);
 assigndata(39,"mein soch",21,23);
 assigndata(40,"mein sooch",21,23);
 assigndata(41,"mein sochta",21,23);
 assigndata(42,"mein kyu",24,25);
 assigndata(43,"mein kyu nahi",24,25);
 assigndata(44,"mein hi",24,25);
 assigndata(45,"mein nahi",26,28);
 assigndata(46,"meine socha",21,23);
 assigndata(47,"meine soocha",21,23);
 assigndata(48,"kya",33,41);
 assigndata(49,"kaise",33,41);
 assigndata(50,"kaun",33,41);
 assigndata(51,"kaha",33,41);
 assigndata(52,"kab",33,41);
 assigndata(53,"kyu",33,41);
 assigndata(54,"tum",5,12);
 assigndata(55,"mein",29,32);
 assigndata(56,"main",29,32);
 assigndata(57,"pyar",77,81);
 assigndata(58,"pyaar",77,81);//tum 5 12
 assigndata(59,"love",77,81);
 assigndata(60,"girlfriend",77,81);
 assigndata(61,"kiss",77,80);
 assigndata(62,"naam",42,43);
 assigndata(63,"kyuki",44,46);
 assigndata(64,"sorry",47,49);
 assigndata(65,"maaf",47,49);
 assigndata(66,"soch",50,52);
 assigndata(67,"sooch",50,52);
 assigndata(68,"socha",50,52);
 assigndata(69,"sapna",53,55);
 assigndata(70,"hi",56,56);
 assigndata(71,"hello",56,56);
 assigndata(72,"namaste",56,56);
 assigndata(73,"shayad",57,60);
 assigndata(74,"nahi",61,65);
 assigndata(75,"nhi",61,65);
 assigndata(76,"nahin",61,65);
 assigndata(77,"tumhara",66,68);
 assigndata(78,"tumhari",66,68);
 assigndata(79,"hamesha",69,72);
 assigndata(80,"ek jaisa",73,76);
 assigndata(81,"ek jaise",73,76);
 assigndata(82,"ek jaisi",73,76);
 assigndata(83,"haan",82,85);
 assigndata(84,"ha",82,85);
 assigndata(85,"sahi",82,85);
 assigndata(86,"sach",82,85);
 assigndata(87,"dost",86,89);
 assigndata(88,"computer",90,93);
 assigndata(89,"machine",90,93);
 assigndata(90,"program",90,93);
 assigndata(91,"ghar",98,100);
 assigndata(92,"gharwale",101,102);
 assigndata(93,"gharwalo",101,102);
 assigndata(94,"mummy",103,104);
 assigndata(95,"ma",103,104);
 assigndata(96,"maa",103,104);
 assigndata(97,"joke",94,97);
 assigndata(98,"mazak",94,97);
 assigndata(99,"mazaak",94,97);
 assigndata(100,"funny",94,97);
 assigndata(101,"haha",105,107);
 assigndata(102,"ha ha",105,107);
 assigndata(103,"game khele",0,0);
}

//0 for straight subs
//1 padded replace whole words
//2 non case senstive assume padded
//3 non case senstive straight
//4 last word hindi

char *replacestr(char *strng,char *s1,char *s2,int type)
{
    char * processed=(char *)malloc(100*sizeof(char));
    strcpy(processed,strng);
    while(1)
    {

    char *p=NULL;
   // char *astring=(char *)malloc(sizeof(100*char));
   // strcpy(astring,strng);
    if(type==0)
    {
        if(strstr(strng,s1)>=0)
         p=strstr(strng,s1);
    }
     else if(type==1)
     {char *temp=(char *)malloc(100*sizeof(char));
         temp[0]=' ';
         temp[1]='\0';
     strcat(temp,s1);
     strcat(temp," ");
         if(strstr(strng,temp)>=0)
            p=strstr(strng,temp);
            if (p!=NULL)
            p=p+1;
    free(temp); }
     else if(type==2)
     {
       //  printf("%s....%s........%s",strng,s1,s2);
         char *temp=(char *)malloc(100*sizeof(char));
         temp[0]=' ';
         temp[1]='\0';
         strcat(temp,s1);
         strcat(temp," ");

int i;
           toLowerCase(strng);
         p=strstr(strng,temp);
         if(p !=NULL)
          p=p+1;
     free(temp);}
     else if(type==3)
     {
         toLowerCase(strng);
         toLowerCase(s1);
         p=strstr(strng,s1);
     }
     else if(type==4)
     {int flag=0;
     char *temp=NULL;
        temp=strstr(strng,"ao ");
       if(temp!=NULL) *(temp+1)='u';
        temp=strstr(strng,"ge ");
       if(temp!=NULL) *(temp+1)='a';
          temp=strstr(strng,"hu ");
        if(temp!=NULL){flag=1;*(temp+1)='o';}
          temp=strstr(strng,"ho ");
        if(temp!=NULL)if(flag==0)
            *(temp+1)='u';
        temp=strstr(strng,"do ");
        if(temp!=NULL) *(temp+1)='u';
        temp=strstr(strng,"te ");
        if(temp!=NULL){flag=2;*(temp+1)='a';}
        temp=strstr(strng,"ta");
        if(flag!=2)
            if(temp!=NULL)*(temp+1)='e';
            return strng;
     }
     if(p!=NULL)
     {
         int i,k=0;
         char *t=strng;
      while(t!=p)
      {
          processed[k++]=(*t);
          t=t+1;

      }
      for(i=0;i<strlen(s2);i++)
        processed[k++]=s2[i];
      t=t+strlen(s1);
      while(*t)
      { processed[k++]=(*t);
        t=t+1;
      }

      processed[k]='\0';
      strcpy(strng,processed);
     }
    else
    {free(strng);
        return processed;
    }

    }
}
char punc[]={'.',',','!','?',':',';','&','\"','@','#','(',')'};
char *padstring(char *str)
{   int i,j;
    char *temp=(char *)malloc(100*sizeof(char));
    temp[0]=' ';
    temp[1]='\0';
    strcat(temp,str);
    strcat(temp," ");
    for(i=0;i<12;i++)
    {
        int k=0;
        for(j=0;j<strlen(temp);j++)
        {
            if(temp[j]==punc[i])
            {
                str[k++]=' ';
                str[k++]=punc[i];
                str[k++]=' ';
            }else
            str[k++]=temp[j];
    }
    str[k]='\0';
    strcpy(temp,str);
    }
    return temp;
}
char *unpadstring(char *str)
{   int i=0;
    str=replacestr(str,"  "," ",0);
    if(str[0]==' ')
        {while(1)
         {str[i]=str[i+1];
         if(str[i]=='\0')
            break;
         i++;}
         }
    if(str[strlen(str)-1]==' ')
        str[strlen(str)-1]='\0';
     char *temp=(char *)malloc(6*sizeof(char));
     char *rtemp=(char *)malloc(3*sizeof(char));
    for(i=0;i<12;i++)
    {

        temp[0]=' ';
        temp[1]=punc[i];
        temp[2]='\0';
        rtemp[0]=punc[i];
        rtemp[1]='\0';
        str=replacestr(str,temp,rtemp,0);
    }

    return str;
}
char *trim(char *str)
{int i;
    while(str[0]==' ')
    {i=0;
        while(1)
        {
            str[i]=str[i+1];
            if(str[i]=='\0')
                break;
            i++;
        }
    }
    while(str[strlen(str)-1]==' ' || str[strlen(str)-1]=='.' ||str[strlen(str)-1]=='!' || str[strlen(str)-1]=='?')
    {
        str[strlen(str)-1]='\0';
    }
    return str;
}
char *rephrase(char *str)//potentially free str
{
    int i;
    char *s=(char *)malloc(100*sizeof(char));
    strcpy(s,str);

//printf("1inloop");
 char *t=(char *)malloc(10*sizeof(char));


    for(i=0;i<100;i=i+2)
    {


        t[0]='#';
        t[1]='@';
        t[2]='!';
        t[3]='\0';
        sprintf(t,"%d",i);

        s=replacestr(s,subjectchange[i],t,2);
    }
    for(i=1;i<100;i++)
    {

        t[0]='#';
        t[1]='@';
        t[2]='!';
        t[3]='\0';
        sprintf(t,"%d",(i-1));
        s=replacestr(s,t,subjectchange[i],2);

    }
   // printf("hi");
    s=replacestr(s,NULL,NULL,4);

    return s;
}
int pass=0;
char *framesentence(char *str,int keyid)
{
    time_t t;
    srand((unsigned)time(&t));
    int range=(keyword[keyid]->eindex)-keyword[keyid]->sindex+1;
    int choice=(keyword[keyid]->sindex)+(int)(floor(rand()%range));
    if(choice==keyword[keyid]->lres && pass<5)
    {pass++;
    return framesentence(str,keyid);
    }
    char *temp=(char *)malloc(100*sizeof(char));
    char *resp=(char *)malloc(100*sizeof(char));
    resp[0]='\0';
    strcpy(resp,response[choice]);
    temp[0]=' ';
    temp[1]='\0';
    pass=0;
    keyword[keyid]->lres=choice;
    char *r=keyword[keyid]->data;

    if(resp[strlen(resp)-1]=='*' || resp[strlen(resp)-1]=='@')
    {
        str=padstring(str);
        toLowerCase(str);
        strcat(temp,r);
        strcat(temp," ");
       // char *substring=(char *)malloc(100*sizeof(char));
        char *substring=strstr(str,temp);

        substring=substring+strlen(r)+1;

        substring=rephrase(substring);

        substring=unpadstring(substring);
        substring=trim(substring);
        if(resp[strlen(resp)-1]=='*')
        {char *x=(char *)malloc(100*sizeof(char));
        x[0]=' ';
        x[1]='\0';
        strcat(x,substring);
        strcat(x,"?");
            resp=replacestr(resp,"<*",x,0);
        }else
        {char *x=(char *)malloc(100*sizeof(char));
        x[0]=' ';
        x[1]='\0';
        strcat(x,substring);
        strcat(x,".");
            resp=replacestr(resp,"<@",x,0);
        }
    }
    free(temp);
   return resp;
}
int findkey(char *str)
{
    int keyid;
    for(keyid=0;keyid<104;keyid++)
    {
        char *temp=(char *)malloc(100*sizeof(char));
        temp[0]=' ';
        temp[1]='\0';
        strcat(temp,(keyword[keyid]->data));
        strcat(temp," ");
        if(strstr(str,temp)!=NULL)
        return keyid;
        free(temp);
    }
    return -1;
}
int censorshipcount=0;
int censor(char *str)
{
    if(strstr(str,"madarchod")!=NULL||strstr(str,"behenchod")!=NULL||strstr(str,"fuck")!=NULL||strstr(str,"choot")!=NULL||strstr(str,"laand")!=NULL||strstr(str,"bhosda")!=NULL||strstr(str,"lund")!=NULL||strstr(str,"lauda")!=NULL||strstr(str,"gaand")!=NULL||
       strstr(str,"randi")!=NULL||strstr(str,"gandu")!=NULL || strstr(str,"bhadwi")||strstr(str," chut"))
     {
         censorshipcount++;
         return 1;
     }
     return 0;
}

int main()
{   initializekey();
display();
storecheck("dummy");
int prevx1=-1,prevx2=-1,prevx3=-1;int prevx4=-1;
   // printf("hi there his is hi there hi hi Is  hi IS a. HIs\n");
   int greeting=0;
   char *aa=(char *)malloc(100*sizeof(char));
   printf("\n....... Hello .......,\nMera naam Maya hai ,Mujhse baat karne ke liye hi bolo\n");
   while(1)
   {gets(aa);
   toLowerCase(aa);
   if(strstr(aa,"hi")==NULL && strstr(aa,"hey")==NULL && strstr(aa,"namaste")==NULL && strstr(aa,"hello")==NULL && strstr(aa,"good")==NULL)
   { time_t tt;
    srand((unsigned)time(&tt));
    int x=(int)(rand()%3);
    if(x==0)
       printf("Kutch hi,hello nahi karte kya tum?\n");
    if(x==1)
        printf("Hi toh bolo atleast...\n");
    if(x==2)
        printf("Commonly log baat karne se pehle hi ya hello karte hai \n");

    continue;
   }
   break;
   }
printf(":) :) Ohh chalo baate karo mujhse ... Talk in hinglish plz ... Aur ha apne bare mein jyada bolna... :)\n");
while(1)
{printf(">");
 char *a=(char *)malloc(100*sizeof(char));
//strcpy(a," kya tum mujhse pyaar karti ho");
gets(a);
printf("* ");
long d;
for(d=0;d<200000000;d++);
toLowerCase(a);
if(censor(a)==1)
{
    if(censorshipcount>4)
    {
        replacestr(a,"meri "," tumhari ",0);
    replacestr(a,"mein","tum",0);

    printf("%s\n",a);
    free(a);
    continue;
    }
     time_t tt;
    srand((unsigned)time(&tt));
    int x;
    x=(int)(rand()%5);
    while(x==prevx3)
        x=(int)(rand()%5);
        prevx3=x;
    if(x==0)
       printf("Mujhe aisi battein karna pasand nahi...\n");
    if(x==1)
       printf("Aisi baate mat karo mujhse:|\n");
    if(x==2)
       printf("Kutch decent si baat karo mujhe \n");
    if(x==3)
        printf("Tum jaisi baat kar raho mujhe pasand nhi aa raha\n");
    if(x==4)
        printf("agar tumhe aisi hi baat karni hai toh mein nhi baat kar rahi tumse\n");
        free(a);
continue;
}

if(strcmp(a,aa)==0)
{
    time_t tt;
    srand((unsigned)time(&tt));
    int x=0;
    while(x==prevx4)
    x=(int)(rand()%3);
    prevx4=x;
    if(x==0)
       printf("Baar Baar ek hi cheez bolne mein maza aata hai kya tumhe...\n");
    if(x==1)
       printf("Tum ne abhi abhi yahi toh bola tha :|\n");
    if(x==2)
       printf("wahi cheez bolne par mein bhi wahi jawab dungi ;)\n");
free(a);
continue;
}
if(strlen(a)==0)
    continue;
strcpy(aa,a);
a=trim(a);
if(strcmp(a,"who's your daddy")==0||strcmp(a,"who is your daddy")==0||strcmp(a,"tumhara baap kaun hai")==0||strcmp(a,"tumhe kisne banaya")==0||strcmp(a,"tumhare papa kaun hai")==0)
{
    printf("Shobhit Awasthi from MNNIT\n");
    continue;
}
if(storecheck(a))
    continue;

if(strcmp(a,"bye")==0 || strcmp(a,"bye-bye")==0 ||strcmp(a,"bye bye")==0|| strcmp(a,"tata")==0 || strcmp(a,"alvida")==0)
  {printf("tata");
    break;}
a=padstring(a);
//printf("%skklls",subjectchange[3]);
//printf("%s",replacestr(a,"."," . ",0));
  //  printf("inmain%s\n",rephrase(a));
  int x=findkey(a);
  if(x==103)
  { game();
   continue;
  }
  if(x==-1 && strlen(a)<18)
  {
       a=rephrase(a);
       time_t tt;
       srand((unsigned)time(&tt));
       int x=(int)(rand()%6);
       while(x==prevx1)
        x=(rand()%6);
       prevx1=x;
       if(x==0)
       printf("Theek hai.... %s ... aur btao\n",a);
       if(x==1)
        printf("Atcha.%s.Saahi na?\n",a);
       if(x==2)
        printf("Okh.%s. Aur kya?\n",a);
        if(x==3)
            printf("%s. Yahi kaha na tumne?\n",a);
        if(x==4)
            printf("ohhh.. %s.Aur kutch kahoge?\n",a);
        if(x==5)
            printf("Tum yahi sochte ho na ki %s?\n",a);
        continue;
  }
  if(x==-1 && strlen(a)>=18)
  {
       time_t tt;
       srand((unsigned)time(&tt));
       int x=(int)(rand()%6);
       while(x==prevx2)
        x=(rand()%6);
       prevx2=x;
    if(x==0)
       printf("atcha");
    if(x==1)
        printf("tumhe koi dikkat hai kya?\n");
    if(x==2)
        printf("mein kutch jyada samjhi nahi\n");
    if(x==3)
        printf("abhi thodi confuse hu mein\n");
    if(x==4)
        printf("atcha.aur kutch btao is baare mein..\n");
    if(x==5)
        printf("tumhe kya lagta hai is baare mein?\n");
   continue;
  }


  //printf("%d",x);
   printf("%s\n",framesentence(a,x));
   free(a);
}
    return 0;
}
void display()
{

    printf("           __...gggg..__                             __     __   \n");
    printf("      .gd$$$$$SSSS$$$$$$$bg._                      /    \\ /   \\  \n");
    printf("    .dSSSS$$$$$$$SSS$$$$$$SSS$bg.                 /  /\\    /\\  \\ \n");
    printf("   d$$$$$$SSSS$$$$$SSSS$$$$$SS$$$bg.             |  |  ****  |  |\n");
    printf("  :SSS$$$$$$$$SSS$$$$$SSSS$$$SS$$SS$b.           ***         ****\n");
    printf("  $$$$SS$$$$$$$$$SSS$$$$$SSS$$S$$$S$$$b\n");
    printf(" :$$$$$$SS$$$$$$$$$$SSSS$$$SS$S$$SS$$$S;               ____      \n");
    printf(" $$$$$$$$$SSP^**""**^T$SS$$$SS$$SS$$$S$$                /    \\    \n");
    printf(" SSSSS$$$$$;            `\"*^S^*\"   \"*^TP            /   /\\  \\   \n");
    printf(":$$$$$SS$$;                            ;           /   /--\   \\  \n");
    printf(":$$$$$$$SS                             |          |   |   |   |   \n");
    printf("SSS$$$$$$;                             :           ***     ***     \n");
    printf("$$$SS$$$$                              ;\n");
    printf("SS$$$SS^'                                          ___    ___    \n");
    printf(":$S$$$;      _                        :            \\  \\  /  /     \n");
    printf(":'\"*T$$     ,d$$s+._               _.g$P             \\  V  /      \n");
    printf("|,'; T;    *'    `*Tbs+,  ,     .sP*\"  ;               |  |        \n");
    printf(":  :          +g+=+._ `*^'    :'  _.++g                |  |         \n");
    printf(";  \\         `T. $$$\\        ; .' $$$|                  ***          \n");
    printf(": `.           ` `\\\"'         |    `\"'|              ____          \n");
    printf(" \\  ;                        :       ;              /    \\        \n");
    printf(" dbg$                                             /   /\\  \\       \n");
    printf(":$$$$ \\                             :            /   /--\\  \\       \n");
    printf(":S$$$  \\                            ;            |  |   |   |       \n");
    printf(" TS$$   `.                 ,  ;                  ***     ***        \n");
    printf(".dSS$                   ;     :    :                    version-0.5 \n");
    printf("d$$$SS`                  '--._.'    ;\n");
    printf(":$$$$$; \\\\n");
    printf(":     ;  .__.--._.-._   \n");
    printf("TS$$$    `.          \-._.-._.-.: .\n");
    printf(".dSS$$   :  `.         `._      .'\n");
    printf("d$$$SS;    \\   `.          `""""'  '\n");
    printf(":$$$$$S;     \\    `-.          \"   / \n");
    printf(":$$$$$$       `.     `-._         / \n");
    printf("TS$$$;         `-.      \"**----*'  \n");
}
int firsttime=0;char name[100],nameoa[100],nameua[100];FILE *oa,*ua;


int storecheck(char *str)
{

int answered=0;

    if(firsttime==0)
    {

    printf("Enter session id- plz\n");
    gets(name);
    strcpy(nameoa,name);
    strcat(nameoa,"oa.txt");
    strcpy(nameua,name);
    strcat(nameua,"ua.txt");
    firsttime=1;
    return 0;
    }
//printf("%s",nameua);
int i,j=0;
    //printf("hi");
char *arr[100];
int len=bitoken(arr,str);
int isq=-1,isabtu=-1,isabto=-1;
for(i=0;i<len;i++)
{if(strcmp(arr[i],"kya")==0)
isq=i;
if((strcmp(arr[i],"mera")==0||strcmp(arr[i],"meri")==0) && (strcmp(arr[len-1],"hai")==0|| strcmp(arr[len-1],"hain")==0))
isabtu=i;
if((strcmp(arr[i],"tumhara")==0||strcmp(arr[i],"tumhari")==0) && (strcmp(arr[len-1],"hai")==0 || strcmp(arr[len-1],"hain")==0))
isabto=i;
}
if(isq==-1 && isabtu>=0)
{
    ua=fopen(nameua,"a");
        //printf("..%s  %s..\n",arr[isabtu+1],arr[len-2]);

    fprintf(ua,"%s %s\n",arr[isabtu+1],arr[len-2]);
   // printf("hi,%d %d, %d",isq,isabtu,isabto);

fclose(ua);
}
else if(isq>=0 && isq<len-1 && isabtu>=0)
{   char *tofind;
    if(strcmp(arr[isq+1],"hai")!=0 && strcmp(arr[isq+1],"hain")!=0)
    tofind=arr[isq+1];
    else
    {if(isabtu<len-1)
        tofind=arr[isabtu+1];
        else
            tofind=arr[isq-1];
    }
    ua=fopen(nameua,"r");
    if(ua==-1)
        return 0;
    while(1)
    {
         char temp[100];
         char tempans[100];

        if(fscanf(ua,"%s",temp)!=1)
        break;
        if(fscanf(ua,"%s",tempans)!=1)
        break;

        if(strcmp(temp,tofind)==0)
        {printf("tumhara %s %s hai\n",temp,tempans);
        answered=1;
         break;
        }
    }
    fclose(ua);
}
else if(isq>=0 && isq<len-1 && isabto>=0)
{   char *tofind;
    if(strcmp(arr[isq+1],"hai")!=0 && strcmp(arr[isq+1],"hain")!=0)
    tofind=arr[isq+1];
    else
    {  if(isabto+1<len)
        tofind=arr[isabto+1];
        else
            tofind=arr[isq-1];
    }
    oa=fopen(nameoa,"r");
    if(oa==-1)
        return 0;
    while(1)
    {
         char temp[100];
         char tempans[100];

        if(fscanf(oa,"%s",temp)!=1)
        break;
        if(fscanf(oa,"%s",tempans)!=1)
        break;

        if(strcmp(temp,tofind)==0)
        {printf("mera %s %s hai\n",temp,tempans);
        answered=1;
         break;
        }
    }
    fclose(oa);
}else if(isq==-1 && isabto>=0)
{

     oa=fopen(nameoa,"a");
        //printf("..%s  %s..\n",arr[isabtu+1],arr[len-2]);
    fprintf(oa,"%s %s\n",arr[isabto+1],arr[len-2]);
fclose(oa);
}
//printf("eennd");
for(i=0;i<100;i++)
    free(arr[i]);
//printf("maybe");
//for(i=0;i<len;i++)
//printf("%s\n",arr[i]);

    return answered;
}
int bitoken(char *arr[100],char *str)
{
    int i=0,j=0;
for(i=0;i<100;i++)
arr[i]=(char *)malloc(100*sizeof(char));
i=0;j=0;
char *s=str;
while(*s)
{
if(((*s)!='\0') && (*s)!=' ')
{
arr[i][j++]=(*s);
arr[i][j]='\0';
s++;
}
else
{   s++;
    j=0;
    i++;
}
if((*s)=='\0')
    {i++;
    break;
    }
}
return i;
}
void displayboard(int board[])
{
    int i=0;
    char ch[9];
    int v=0;
    for(i=0;i<9;i++)
    {

        if(board[i]==0)
            ch[i]='0';
        else if(board[i]==1)
            ch[i]='X';
        else
            ch[i]=' ';

    }

    printf("   %c | %c  | %c           %d | %d  | %d \n",ch[0],ch[1],ch[2],1,2,3);
    printf("  ___|____|____       ____|____|_____\n");
    printf("   %c | %c  | %c           %d | %d  | %d \n",ch[3],ch[4],ch[5],4,5,6);
    printf("  ___|____|____       ____|____|_____\n");
    printf("   %c | %c  | %c           %d | %d  | %d \n",ch[6],ch[7],ch[8],7,8,9);
}
int game()
{
    printf("\nLoading....\n");
    int mat[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
    long i;
    int j;
    long l=350000;
    int **arr=(int **)malloc(350000*sizeof(int*));
    for(i=0;i<350000;i++)
    arr[i]=(int *)malloc(9*sizeof(int));
    int **noresult=(int **)malloc(350000*sizeof(int*));
    for(i=0;i<350000;i++)
    noresult[i]=(int *)malloc(9*sizeof(int));
for(i=0;i<350000;i++)
    {
     for(j=0;j<9;j++)
            arr[i][j]=-1;
    }

time_t tt;
srand((unsigned)time(&tt));
long r=0,s=0;
int k;
for(i=0;i<350000;i++)
{
    memset(mat,-1,sizeof(mat));

for(k=0;k<9;k++)
{
int x;
int c;
if(k%2==0)
{
int done=0;
for(c=0;c<9;c++)
{
    if(mat[c]==1 || mat[c]==0)
        continue;

    mat[c]=0;
    if(check(mat)==1)
      {
           arr[r][k]=c;
            r++;
            done=1;
            break;
      }
    mat[c]=-1;

}
if(done==1)
    break;
for(c=0;c<9;c++)
{
    if(mat[c]==1 || mat[c]==0)
        continue;
    mat[c]=1;
    if(check(mat)==-1)
      {
	   mat[c]=0;
          arr[r][k]=c;
            noresult[s][k]=c;
            done=2;
            break;
      }
    mat[c]=-1;

}
if(done==2)
    {
        if(k==8)
           {s++;break;}
        continue;
    }
}


while(1)
{
x=rand()%9;
if(mat[x]==-1)
break;
}
if(k%2==0)
mat[x]=0;
else
mat[x]=1;
noresult[s][k]=x;
arr[r][k]=x;
int y=check(mat);
if(y==-1)
    break;
//if(y==1)
//{
  //  r++;
    //break;;
//}
if(k==8)
s++;
}
}
int firstmove=rand()%9;
int x=firstmove;k=0;
j=0;int m=-1;
int moved[9];
memset(moved,-1,sizeof(moved));
//printf("%ld %ld",r,s);
/*for(i=0;i<9;i++)
    printf("%d-",arr[r-1][i]);
for(i=0;i<9;i++)
    printf("%d.",noresult[s-1][i]);
    */
    int board[9];
    memset(board,-1,sizeof(board));
for(i=0;i<5;i++)
{

     long d;
     for(d=0;d<200000000;d++);
    printf("\nMaya moves at %d\n",(x+1));
    m++;
    moved[m]=x;
    board[x]=0;
    displayboard(board);
    printf("\n");
    if(check(board)==1)
        {printf("\n HaHaHa \nI win.... :P\n");
        break;
        }
    if(check(board)==-1)
        {printf("\n Congratulations!!!!....\nYou win :)\n");
        break;
        }
    if(m==8)
	{printf("\nX----Match Draw----X\n");
        break;}
    int usermove;
    scanf("%d",&usermove);
    printf("User move %d \n",usermove);
    usermove=usermove-1;
    m=m+1;



    moved[m]=usermove;
    board[usermove]=1;



    x=-1;
    long k;
    for(k=0;k<r;k++)
    {
        if(startswith(moved,arr[k],m)==1)
        {
            x=arr[k][m+1];
            break;
        }
    }
    if(x==-1)
    {
        for(k=0;k<s;k++)
        {
            if(startswith(moved,noresult[k],m)==1)
            {
                x=noresult[k][m+1];
                break;
            }
        }
    }
if(x==-1)
{
while(1)
{
printf("OOPs\n");
x=rand()%9;
if(board[x])
break;
}
}
}
    return 0;

}
int startswith(int moved[],int ar[],int c)
{
    int i=0;
    while(i<=c && moved[i]==ar[i])
    {
        i++;
    }
    if(i==c+1)
        return 1;
    else
        return 0;
}


int check(int ar[])
{
    int k=-1;
    if(ar[0]==ar[3] && ar[0]==ar[6] && ar[0]!=-1)
        k=ar[0];
    else if(ar[0]==ar[1] && ar[0]==ar[2] && ar[0]!=-1)
        k=ar[0];
    else if(ar[0]==ar[4] && ar[0]==ar[8] && ar[0]!=-1)
        k=ar[0];
    else if(ar[1]==ar[4] && ar[1]==ar[7] && ar[1]!=-1)
        k=ar[1];
    else if(ar[2]==ar[5] && ar[2]==ar[8] && ar[2]!=-1)
        k=ar[2];
    else if(ar[4]==ar[3] && ar[3]==ar[5] && ar[3]!=-1)
        k=ar[3];
    else if(ar[6]==ar[7] && ar[6]==ar[8] && ar[6]!=-1)
        k=ar[6];
    else if(ar[2]==ar[4] && ar[2]==ar[6] && ar[2]!=-1)
        k=ar[2];

    if(k==0)
       return 1;
    if(k==1)
        return -1;
    return 0;
}


