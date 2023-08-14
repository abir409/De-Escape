# include "iGraphics.h"
# include "myheader.h"


int mcover;
int cover,start,story=0,about,control,exitt,back,next;
int stoscr,conscr,aboscr=0;
int bg[20]={};
int dl[54];
int i=15,j=0;
int screen=0,carsc=0;
int cha,car,cx=950,cy=150,cax=1200,cay=0,head,headx=924,heady=320;
int mudgate1=0,mg1x=730,mg1y=440,mudgate2,mg2x=480,mg2y=178,mudgate3,mg3x=230,mg3y=311,airpow,airpowx=headx,airpowy=heady+25,waterpow,waterpowx=headx,waterpowy=heady+25;
int rid,rid1,rid2,rid3,rid4,rid5,rid6;
int sto1,stopow1,sto2,stopow2;
int firemon1=0,firemon1x=0,firemon1y=284,firemon2=0,firemon2x=-600,firemon2y=129,firemon3=0,firemon3x=-1200,firemon3y=440;
int earthmon1=0,earthmon1x=-300,earthmon1y=440,earthmon2=0,earthmon2x=-900,earthmon2y=284,earthmon3=0,earthmon3x=-1500,earthmon3y=129;

char str[100], str2[100],s[]={'s','e','e','d','\0'};
int len;
int mode;

bool firemonshow1=true,firemonshow2=true,firemonshow3=true,earthmonshow1=true,earthmonshow2=true,earthmonshow3=true;
bool rid1show=false,rid2show=false,rid3show=false,rid4show=false,rid5show=false,rid6show=false;
bool sto1show=false,sto2show=false;
bool mudgate1show=true,mudgate2show=true,mudgate3show=true,airpowshow=false,waterpowshow=false;

void drawTextBox()
{
	iSetColor(150, 150, 150);
	iRectangle(430, 370, 250, 30);
}

void bg0(int butt, int sta, int max, int may)
{
	if(max >= 924 && max <= 1024 && may >= 0 && may <= 50)
			{
				while(j<4){
				   j--;
				   break;
				}
			}
}
void bg1(int butt, int sta, int max, int may)
{
	if(max >= 924 && max <= 1024 && may >= 0 && may <= 50)
			{
				while(j<6){
				   j--;
				   break;
				}
			}
}
void bg3(int butt, int sta, int max, int may)
{
	if(max >= 924 && max <= 1024 && may >= 0 && may <= 50)
			{
				while(j<12){
				   j--;
				   break;
				}
			}
}
void bg4(int butt, int sta, int max, int may)
{
	if(max >= 924 && max <= 1024 && may >= 0 && may <= 50)
			{
				while(j<14){
				   j--;
				   break;
				}
			}
}
void bg5(int butt, int sta, int max, int may)
{
	if(max >= 924 && max <= 1024 && may >= 0 && may <= 50)
			{
				while(j<22){
				   j--;
				   break;
				}
			}
}
void bg6(int butt, int sta, int max, int may)
{
	if(max >= 924 && max <= 1024 && may >= 0 && may <= 50)
			{
				while(j<27){
				   j--;
				   break;
				}
			}
}
void bg7(int butt, int sta, int max, int may)
{
	if(max >= 924 && max <= 1024 && may >= 0 && may <= 50)
			{
				while(j<39){
				   j--;
				   break;
				}
			}
}
void bg8(int butt, int sta, int max, int may)
{
	if(max >= 924 && max <= 1024 && may >= 0 && may <= 50)
			{
				while(j<46){
				   j--;
				   break;
				}
			}
}
void bg12(int butt, int sta, int max, int may)
{
	if(max >= 924 && max <= 1024 && may >= 0 && may <= 50)
			{
				while(j<54){
				   j--;
				   break;
				}
			}
}

void synch(){
	//iShowImage(0, 0, 1024, 128, dl[j]);
	if(i==0){
    if(cx<800&&cx>700) j=0; if(cx<600&&cx>500) j=1; if(cx<500&&cx>400) j=2;if(cx<300&&cx>200) j=3;
	}
	else if(i==1){
    if(cx<=1200&&cx>800) j=4; if(cx<=600&&cx>200) j=5;
	}
	else if(i==3){
	if(cx<=1200&&cx>700) j=6; if(cx<=700&&cx>600) j=7;if(cx<=600&&cx>500) j=8;if(cx<=500&&cx>400) j=9;if(cx<=400&&cx>300) j=10;if(cx<=300&&cx>200) j=11;
	}
	else if(i==4){
    if(cx<=1200&&cx>800) j=12; if(cx<=600&&cx>200) j=13;
	}
	else if(i==5){
    if(cx<=1200&&cx>900) j=14;if(cx<=900&&cx>800) j=15;if(cx<=800&&cx>700) j=16;if(cx<=700&&cx>600) j=17;if(cx<=600&&cx>500) j=18;if(cx<=500&&cx>400) j=19;if(cx<=400&&cx>300) j=20;if(cx<=300&&cx>200) j=21;
	}
	else if(i==6){
    if(cx<=1200&&cx>700) j=22; if(cx<=700&&cx>600) j=23;if(cx<=600&&cx>500) j=24;if(cx<=500&&cx>400) j=25;if(cx<=400&&cx>200) j=26;
	}
	else if(i==7){
    if(cx<=1200&&cx>=1000) j=27;if(cx<1000&&cx>=950) j=28;if(cx<950&&cx>=900) j=29;if(cx<900&&cx>=850) j=30;if(cx<850&&cx>=800) j=31;if(cx<800&&cx>=750) j=32;if(cx<750&&cx>=700) j=33;if(cx<700&&cx>=650) j=34;if(cx<650&&cx>=600) j=35;if(cx<600&&cx>=550) j=36;if(cx<550&&cx>=400) j=37;if(cx<400&&cx>=300) j=38;
	}
	else if(i==8){
	if(cx<=1200&&cx>900) j=39; if(cx<=900&&cx>800) j=40;if(cx<=800&&cx>700) j=41;if(cx<=700&&cx>600) j=42;if(cx<=600&&cx>500) j=43;if(cx<=500&&cx>400) j=44;if(cx<=400&&cx>300) j=45;
	}
	else if(i==12){
    if(cx<=1200&&cx>900) j=46;if(cx<=900&&cx>800) j=47;if(cx<=800&&cx>700) j=48;if(cx<=700&&cx>600) j=49;if(cx<=600&&cx>500) j=50;if(cx<=500&&cx>400) j=51;if(cx<=400&&cx>300) j=52;if(cx<=300&&cx>200) j=53;
	}
 
}
//int walt,car,wx=1200,wy=-30,cx=1200,cy=0;;

//int bg[2];
//int i=0;
/*
function iDraw() is called again and again by the system.
*/

void iDraw()
{
	//place your drawing codes here

	iClear();

	/* iShowImage():
	Here, first 2 parameters are the lower left
	corner position of image you want to put.
	3rd and 4th parameters are the widht and the height
	of the image.
	Last parameter is the id of the image you want to put.
	*/
	
iShowImage(0, 0, 1024, 640, mcover);

if(screen==0){
    iShowImage(0, 0, 1024, 640, cover);
	iShowImage(437,210,150, 80, start);
	iShowImage(356,125, 150, 80, story);
	iShowImage(518,125, 150, 80, control);
	iShowImage(437,40, 150, 80, about);
	iShowImage(0,590, 100, 50, exitt);
	}
else if(screen==1)
	{
	iShowImage(0, 129, 1024, 512, bg[i]);
	
	iShowImage(0, 0, 1024, 128, dl[j]);
	synch();
    if(cx<200)
	iShowImage(924, 0, 100, 50, next);

	  if(i==9||i==10)
		iShowImage(0,590, 100, 50, exitt);

	  if(carsc==1)
		iShowImage(cx,cy,300, 100, car);

	  if(carsc==0){
		iShowImage(cx,cy,100, 200, cha);
		if(i==8||i==11){
		  iShowImage(240,490,32, 16, rid);
		  if(rid1show==true)
			  iShowImage(312,184,400, 400, rid1);
		}
		if(i==13){
		  iShowImage(240,490,32, 16, rid);
		  iShowImage(480,560,16, 16, sto1);
		  if(rid2show==true)
			  iShowImage(312,184,400, 400, rid2);
		  if(sto1show==true)
			  iShowImage(312,184,400, 400, stopow1);
		}	
		if(i==15)
		{
			if(firemonshow1==true){
			 iShowImage(firemon1x,firemon1y,100, 200, firemon1);
			}
			if(firemonshow2==true){
			 iShowImage(firemon2x,firemon2y,100, 200, firemon2);
			}
			if(firemonshow3==true){
			 iShowImage(firemon3x,firemon3y,100, 200, firemon3);
			}
			if(earthmonshow1==true){
			 iShowImage(earthmon1x,earthmon1y,100, 200, earthmon1);
			}
			if(earthmonshow2==true){
			 iShowImage(earthmon2x,earthmon2y,100, 200, earthmon2);
			}
			if(earthmonshow3==true){
			 iShowImage(earthmon3x,earthmon3y,100, 200, earthmon3);
			}
			if(airpowshow==true)
			  iShowImage(airpowx,airpowy,50, 50, airpow);
			 if(waterpowshow==true)
			  iShowImage(waterpowx,waterpowy,50, 50, waterpow);
			 
			 if(firemonshow1==false && firemonshow2==false&& earthmonshow1==false)
			 {
			  iShowImage(390,610,32, 16, rid); 
		      if(rid4show==true)
			  iShowImage(312,184,400, 400, rid4);
			  }
		     if(firemonshow3==false && earthmonshow2==false&& earthmonshow3==false)
			 {
			  iShowImage(602,590,32, 16, rid);
		      if(rid5show==true)
			  iShowImage(312,184,400, 400, rid5);
			 }
			

		}
		if(i==16){
			drawTextBox();
			if(mode == 1)
			{
				iSetColor(255, 255, 255);
				iText(435, 380, str,GLUT_BITMAP_TIMES_ROMAN_24);//1st letter x,y
			}
	}
		
	}
	  if(carsc==3){
	  iShowImage(headx,heady,100, 100, head);
	  if(i==14){
		  iShowImage(310,620,32, 16, rid);
		  iShowImage(160,140,16, 16, sto2);

		  if(mudgate1show==true)
			  iShowImage(mg1x,mg1y,20, 150, mudgate1);
		  if(mudgate2show==true)
			  iShowImage(mg2x,mg2y,20, 150, mudgate2);
		  if(mudgate3show==true)
			  iShowImage(mg3x,mg3y,20, 150, mudgate3);

		  if(rid3show==true)
			  iShowImage(312,184,400, 400, rid3);
		  if(sto2show==true)
			  iShowImage(312,184,400, 400, stopow2);

		  if(airpowshow==true)
			  iShowImage(airpowx,airpowy,50, 50, airpow);
	  }
	  }
}
else if(screen==2)
	{
	iShowImage(0, 0, 1024, 640, stoscr);
	iShowImage(924, 0, 100, 50, back);
	}

else if(screen==3)
	{
	iShowImage(0, 0, 1024, 640, conscr);
	iShowImage(924, 0, 100, 50, back);
	}
else if(screen==4)
	{
	iShowImage(0, 0, 1024, 640, aboscr);
	iShowImage(924, 0, 100, 50, back);
	}

	//iShowImage(pic_x, pic_y, 100, 100, image3);

    //iUnRotate();
	//iSetColor(0, 0, 0);
	//iText(10, 10, "Press p for pause, r for resume, END for exit.");
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}
/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
	//place your codes here
	if(i==8||i==11){
		if(mx>=240 && mx<=272 && my>=490 && my<=506)
			rid1show=true;
		else
			rid1show=false;
	}
	if(i==13){
		if(mx>=240 && mx<=272 && my>=490 && my<=506)
			rid2show=true;
		else
			rid2show=false;	
	}
	if(i==13){
		if(mx>=480 && mx<=496 && my>=560 && my<=576)
			sto1show=true;
		else
			sto1show=false;	
	}
	if(i==14){
		if(mx>=310 && mx<=342 && my>=620 && my<=636)
			rid3show=true;
		else
			rid3show=false;	
	}
	if(i==14){
		if(mx>=160 && mx<=176 && my>=140 && my<=156)
			sto2show=true;
		else
			sto2show=false;	
	}
	
	if(i==15){
	if(firemonshow1==false && firemonshow2==false&& earthmonshow1==false){
		if(mx>=390 && mx<=422 && my>=610 && my<=626)
			rid4show=true;
		else
			rid4show=false;
	}
	if(firemonshow3==false && earthmonshow2==false&& earthmonshow3==false){
		if(mx>=602 && mx<=634 && my>=590 && my<=606)
			rid5show=true;
		else
			rid5show=false;
	}
		
	}
	

	printf("x=%d  y=%d\n",mx,my);
}


/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if(screen==0){
			if(mx >= 0 && mx <= 100 && my >= 590 && my <= 640)
				exit(0);
			else if(mx >= 437 && mx <= 587 && my >= 210 && my <= 290)
				screen=1;
			else if(mx >= 356 && mx <= 506 && my >= 125 && my <= 205)
				screen=2;
			else if(mx >= 518 && mx <= 668 && my >= 125 && my <= 205)
				screen=3;
			else if(mx >= 437 && mx <= 587 && my >= 40 && my <= 120)
				screen=4;
		}
		else if(screen==2){
			if(mx >= 924 && mx <= 1024 && my >= 0 && my <= 50)
				screen=0;
		}
		else if(screen==3){
			if(mx >= 924 && mx <= 1024 && my >= 0 && my <= 50)
				screen=0;
		}
		else if(screen==4){
			if(mx >= 924 && mx <= 1024 && my >= 0 && my <= 50)
				screen=0;
		}
		else if(screen==1){
			if(i==0)
				bg0(button,state,mx,my);
			if(i==1)
				bg1(button,state,mx,my);
			if(i==3)
				bg3(button,state,mx,my);
			if(i==4)
				bg4(button,state,mx,my);
			if(i==5)
				bg5(button,state,mx,my);
			if(i==6)
				bg6(button,state,mx,my);
			if(i==7)
				bg7(button,state,mx,my);
			if(i==8)
				bg8(button,state,mx,my);

			if(i==12)
				bg12(button,state,mx,my);
			if(i==9||i==10)
				{
					if(mx >= 0 && mx <= 100 && my >= 590 && my <= 640)
					screen=0;
					i=0;
					j=0;
			    }
			
			if(i==16){
				if(mx >= 430 && mx <= 680 && my >= 370 && my <= 400 && mode == 0)
				{
				mode = 1;
				}
			}
			
			

		}
		

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'p')
	{
		//do something with 'q'
		iPauseTimer(0);
	}
	if (key == 'r')
	{
		iResumeTimer(0);
	}
	if(i==8){
	   if(key == '1')
	      i=9;
	   if(key == '2')
	      i=11;
	   if(key == '3')
	      i=10;
	}
	if(i==12){
	   if(key == '1')
	      i=13;
	   if(key == '2')
	      i=11;
	   
	}
	if(i==14){
		if(key == 'a')
	    airpowshow=true;
		airpowx=headx;
	    airpowy=heady+25;
	}
	if(i==15){
		if(key == 'a'){
		airpowshow=true;
		airpowx=cx;
	    airpowy=cy+100;
		}
		if(key == 'w'){
	    waterpowshow=true;
		waterpowx=cx;
	    waterpowy=cy+100;
		}
	}
	
	if(i==16){
	int k,flag=0;
	if(mode == 1)
	{
        if(key == '\r')
		{
			mode = 0;
			strcpy(str2, str);
			printf("%s\n", str2);
			//printf("%s\n", s);
			//if(s==str2)
				//exit (0);
				if(flag<=2){
				if(strcmp(s,str2) == 0)
					i=17;
				else
				    flag++;
				}
				if(flag>2)
				  i=11;
			
			for(k = 0; k < len; k++)
				str[k] = 0;
			len = 0;
		}
		else
		{
			str[len] = key;
			len++;
		}
	}
	}
	
	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	if (key == GLUT_KEY_LEFT)
	{
	if(i!=9&&i!=10){
	    if(i==8||i==12){
			carsc=0;
			    if(cx<=300&&cx>200)
				{
				cx=cx;
				}
				else cx=cx-50;
			}
		else if(i==16){
			carsc=0;
			    if(cx<=550&&cx>450)
				{
				cx=cx;
				}
				else cx=cx-50;
			}
		else if(i==0||i>2){
			if(i==14){
				carsc=3;
				if(headx==750||headx>=740){
					if(headx<=750 && (heady<=440 || heady>=590) )
						headx=headx;
					else if(headx<=745){
						if(mudgate1show==true){
							headx=headx-10;
							exit(0);
						}
						else 
							headx=headx-10;
					}
					else 
						headx=headx-10;
				}
				else if(headx==500||headx>=490){
					if(headx<=500 && (heady<=178 || heady>=328) )
						headx=headx;
					else if(headx<=495){
						if(mudgate2show==true){
							headx=headx-10;
							exit(0);
						}
						else 
							headx=headx-10;
					}
					else 
						headx=headx-10;
				}
				else if(headx==250||headx>=240){
					if(headx<=250 && (heady<=311 || heady>=461) )
					headx=headx;
					else if(headx<=245){
						if(mudgate3show==true){
							headx=headx-10;
							exit(0);
						}
						else 
							headx=headx-10;
					}
					else 
						headx=headx-10;
				}
				else if(headx<10)
				{
					headx=1000;
					 i++;
				}
				else
                headx=headx-10;
				
			}//end if(i==14)
			else{
				carsc=0;
				cx=cx-50;
				if(cx<10)
				{
					cx=1100;
					i++;
				}
			}	
		}
		else if(i==1||i==2){
			carsc=1;
			cx=cx-100;
			if(cx<10)
			{
			cx=1000;
			i++;
			}
	}
		
  }
}
	if (key == GLUT_KEY_UP)
	{
		if(i!=8&&i!=9&&i!=10&&i!=12){	
			if(i==0||i>2){
				if(i==14){
				carsc=3;
				if(heady>=590)
					heady=590;
				else
					heady=heady+20;
			}
			else{
				carsc=0;
				if(cy>=540)
					cy=540;
				else
					cy=cy+20;
			}
		}	
	  }
	}
	if (key == GLUT_KEY_DOWN)
	{
		if(i!=8&&i!=9&&i!=10&&i!=12){	
			if(i==0||i>2){
				if(i==14){
					carsc=3;
				if(heady<=140)
					heady=140;
				else
					heady=heady-20;
			}
			else{
				carsc=0;
				if(cy<=140)
					cy=140;
				else
					cy=cy-20;
			}	
		}	
	  }
	}
	//place your codes for other keys here
}

void Change() {
	if(i==14){
	if(airpowshow==true){
	 airpowx=airpowx-10;
	 airpowy = airpowy+0;
     if(airpowx<=750 &&( airpowy>440 && airpowy<590))
			{
				mudgate1show=false;
				airpowshow=false;
	        }
	 else if(airpowx<=500 &&( airpowy>178 && airpowy<320))
			{
				mudgate2show=false;
				airpowshow=false;
	        }
	 else if(airpowx<=250 &&( airpowy>311 && airpowy<461))
			{
				mudgate3show=false;
				airpowshow=false;
	        }
	} 
	}
	else if(i==15){
		if(airpowshow==true){
			airpowx=airpowx-10;
			airpowy = airpowy+0;
			if(airpowx<=(earthmon1x+100) &&( airpowy>(earthmon1y) && airpowy<(earthmon1y+200)))
			{
				earthmonshow1=false;
				airpowshow=false;
	        }
			if(airpowx<=(earthmon2x+100) &&( airpowy>(earthmon2y) && airpowy<(earthmon2y+200)))
			{
				earthmonshow2=false;
				airpowshow=false;
	        }
			if(airpowx<=(earthmon3x+100) &&( airpowy>(earthmon3y) && airpowy<(earthmon3y+200)))
			{
				earthmonshow3=false;
				airpowshow=false;
	        }
		}
		if(waterpowshow==true){
			waterpowx=waterpowx-10;
			waterpowy = waterpowy+0;
			if(waterpowx<=(firemon1x+100) &&( waterpowy>(firemon1y) && waterpowy<(firemon1y+200)))
			{
				firemonshow1=false;
				waterpowshow=false;
	        }
			if(waterpowx<=(firemon2x+100) &&( waterpowy>(firemon2y) && waterpowy<(firemon2y+200)))
			{
				firemonshow2=false;
				waterpowshow=false;
	        }
			if(waterpowx<=(firemon3x+100) &&( waterpowy>(firemon3y) && waterpowy<(firemon3y+200)))
			{
				firemonshow3=false;
				waterpowshow=false;
	        }
		}
	}
}
void mons(){
	if(i==15){
		if(firemonshow1==true){
		firemon1x=firemon1x+10;
	    firemon1y = firemon1y+0;
		}
		if(firemonshow2==true){
		firemon2x=firemon2x+10;
	    firemon2y = firemon2y+0;
		}
		if(firemonshow3==true){
		firemon3x=firemon3x+10;
	    firemon3y = firemon3y+0;
		}
		if(earthmonshow1==true){
		earthmon1x=earthmon1x+10;
	    earthmon1y = earthmon1y+0;
		}
		if(earthmonshow2==true){
		earthmon2x=earthmon2x+10;
	    earthmon2y = earthmon2y+0;
		}
		if(earthmonshow3==true){
		earthmon3x=earthmon3x+10;
	    earthmon3y = earthmon3y+0;
		}

	}

}



int main()
{
	//place your own initialization codes here.


	iInitialize(1024,640, "DE Escape");

	iSetTimer(20, Change);
	iSetTimer(40, mons);

	// loading images.
	/* iLoadImage() will return an interger type id
	   for each image you load.
	*/
	mcover = iLoadImage("BG\\mcover.jpg");

	cover = iLoadImage("BG\\stpg.png");
	start = iLoadImage("BT\\start.png");
	about = iLoadImage("BT\\ab.png");
	story = iLoadImage("BT\\story.png");
	control = iLoadImage("BT\\controls.png");
	exitt = iLoadImage("BT\\exit.png");
	back = iLoadImage("BT\\back.png");
	next = iLoadImage("BT\\next.png");

	car= iLoadImage("CH\\car.png");
	cha = iLoadImage("CH\\chr.png");
	head = iLoadImage("CH\\head.png");
	airpow = iLoadImage("CH\\airpow.png");
	waterpow = iLoadImage("CH\\waterpow.png");

	mudgate1 = iLoadImage("CH\\gate1.png");
	mudgate2 = iLoadImage("CH\\gate1.png");
	mudgate3 = iLoadImage("CH\\gate1.png");
	firemon1 = iLoadImage("CH\\firemon.png");
	firemon2 = iLoadImage("CH\\firemon.png");
	firemon3 = iLoadImage("CH\\firemon.png");
	earthmon1 = iLoadImage("CH\\earthmon.png");
    earthmon2 = iLoadImage("CH\\earthmon.png");
	earthmon3 = iLoadImage("CH\\earthmon.png");

	stoscr = iLoadImage("BT\\stoscr.png");
	aboscr = iLoadImage("BT\\aboscr.png");
	conscr = iLoadImage("BT\\conscr.png");

	rid = iLoadImage("RP\\ridlet.png");
	rid1 = iLoadImage("RP\\rid1.png");
	rid2 = iLoadImage("RP\\rid2.png");
	rid3 = iLoadImage("RP\\rid3.png");
	rid4 = iLoadImage("RP\\rid4.png");
	rid5 = iLoadImage("RP\\rid5.png");
	rid6 = iLoadImage("RP\\rid6.png");
	sto1 = iLoadImage("RP\\airsto.png");
	stopow1 = iLoadImage("RP\\airpo.png");
	sto2 = iLoadImage("RP\\watersto.png");
	stopow2 = iLoadImage("RP\\waterpo.png");
	

	bg[0] = iLoadImage("BG\\house.jpg");
	bg[1] = iLoadImage("BG\\road.jpg");
	bg[2] = iLoadImage("BG\\forest.png");
	bg[3] = iLoadImage("BG\\waterfall.png");
	bg[4] = iLoadImage("BG\\forest cave.png");
	bg[5] = iLoadImage("BG\\tunnel2.png");
	bg[6] = iLoadImage("BG\\tunnel22.png");
	bg[7] = iLoadImage("BG\\cave.png");
	bg[8] = iLoadImage("BG\\cave3.png");
	bg[9] = iLoadImage("BG\\go1.png");
	bg[10] = iLoadImage("BG\\go11.png");
	bg[11] = iLoadImage("BG\\cave3.png");
	bg[12] = iLoadImage("BG\\cave2.png");
	bg[13] = iLoadImage("BG\\cave2.png");
	bg[14] = iLoadImage("BG\\cavetrap1.png");
	bg[15] = iLoadImage("BG\\fightmon.png");
	bg[16] = iLoadImage("BG\\endpass.jpg");

	dl[0] = iLoadImage("DL\\1.png");
	dl[1] = iLoadImage("DL\\2.png");
	dl[2] = iLoadImage("DL\\3.png");
	dl[3] = iLoadImage("DL\\4.png");
	dl[4] = iLoadImage("DL\\5.png");
	dl[5] = iLoadImage("DL\\6.png");
	dl[6] = iLoadImage("DL\\7.png");
	dl[7] = iLoadImage("DL\\8.png");
	dl[8] = iLoadImage("DL\\9.png");
	dl[9] = iLoadImage("DL\\10.png");
	dl[10] = iLoadImage("DL\\11.png");
	dl[11] = iLoadImage("DL\\12.png");
	dl[12] = iLoadImage("DL\\13.png");
	dl[13] = iLoadImage("DL\\14.png");
	dl[14] = iLoadImage("DL\\15.png");
	dl[15] = iLoadImage("DL\\16.png");
	dl[16] = iLoadImage("DL\\17.png");
	dl[17] = iLoadImage("DL\\18.png");
	dl[18] = iLoadImage("DL\\19.png");
	dl[19] = iLoadImage("DL\\20.png");
	dl[20] = iLoadImage("DL\\21.png");
	dl[21] = iLoadImage("DL\\22.png");
	dl[22] = iLoadImage("DL\\23.png");
	dl[23] = iLoadImage("DL\\24.png");
	dl[24] = iLoadImage("DL\\25.png");
	dl[25] = iLoadImage("DL\\26.png");
	dl[26] = iLoadImage("DL\\27.png");
	dl[27] = iLoadImage("DL\\28.png");
	dl[28] = iLoadImage("DL\\29.png");
	dl[29] = iLoadImage("DL\\30.png");
	dl[30] = iLoadImage("DL\\31.png");
	dl[31] = iLoadImage("DL\\32.png");
	dl[32] = iLoadImage("DL\\33.png");
	dl[33] = iLoadImage("DL\\34.png");
	dl[34] = iLoadImage("DL\\35.png");
	dl[35] = iLoadImage("DL\\36.png");
	dl[36] = iLoadImage("DL\\37.png");
	dl[37] = iLoadImage("DL\\38.png");
	dl[38] = iLoadImage("DL\\39.png");
	dl[39] = iLoadImage("DL\\40.png");
	dl[40] = iLoadImage("DL\\41.png");
	dl[41] = iLoadImage("DL\\42.png");
	dl[42] = iLoadImage("DL\\43.png");
	dl[43] = iLoadImage("DL\\44.png");
	dl[44] = iLoadImage("DL\\45.png");
	dl[45] = iLoadImage("DL\\46.png");
	dl[46] = iLoadImage("DL\\47.png");
	dl[47] = iLoadImage("DL\\48.png");
	dl[48] = iLoadImage("DL\\49.png");
	dl[49] = iLoadImage("DL\\50.png");
	dl[50] = iLoadImage("DL\\51.png");
	dl[51] = iLoadImage("DL\\52.png");
	dl[52] = iLoadImage("DL\\53.png");
	dl[53] = iLoadImage("DL\\54.png");
	dl[54] = iLoadImage("DL\\55.png");

	
	iStart(); // it will start drawing

	return 0;
}

