    #include <stdlib.h>         
    #include "GL/glut.h" 
    #include "GL/glu.h"
       
    static int palm = 0,wrist=0,wrist2=0, f1 = 0,f2 = 0,f3 = 0,f4 = 0,f5 = 0,rotateall=0;
    static int tz=30,mz=0,iz=3.5,rz=357,lz=354;  
    static float sx=1,sy=1,sz=1; 
    static float ta=-2.0,tb=0,tc=0;
       
    void init(void)   
    {   
      //glClearColor(0.5, 0.5, 0.5, 1.0);   
         
    }   
       
    void display(void)   
    {   
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); 
        //palm  
       // glColor3f( 1.0, 0.0, 1.0 );   
        glPushMatrix();   
        glTranslatef(ta,tb,tc); 
        glScalef(sx,sy,sz);  
        glRotatef((GLfloat) palm, 1.0, 0.0, 0.0);
        glRotatef((GLfloat) wrist2, 0.0, 1.0, 0.0);
        glRotatef((GLfloat) wrist, 0.0, 0.0, 1.0);   
        glTranslatef(1.0, 0.0, 0.0); 
        glRotatef((GLfloat) rotateall, 1.0, 0.0, 0.0);   
        glPushMatrix(); 
        glPushMatrix(); 
        glScalef(2.5,2.3,0.5);   
        glColor3f( 1.0, 0.5, 0.1 );   
        glutSolidCube(1.0);
        glPopMatrix(); 

       //middle finger
        glTranslatef(1.2, 0.3, 0.0); 
        glRotatef((GLfloat) mz, 0.0, 0.0, 1.0);   
        glRotatef((GLfloat) f1, 0.0, 1.0, 0.0);   
        glTranslatef(0.8, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(1.0,0.4,0.4);   
        glColor3f( 1.0, 0.0, 0.5 );   
        glutSolidCube(1.0);   
        glPopMatrix();   
        
        glTranslatef(0.4, 0.0, 0.0);   
        glRotatef((GLfloat) f1, 0.0, 1.0, 0.0);   
        glTranslatef(0.8, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(1.0,0.4,0.4);   
        glColor3f( 1.0, 0.0, 0.5 );   
        glutSolidCube(1.0);   
        glPopMatrix();

        glTranslatef(0.4, 0.0, 0.0);   
        glRotatef((GLfloat) f1, 0.0, 1.0, 0.0);   
        glTranslatef(0.8, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(1.0,0.4,0.4);   
        glColor3f( 1.0, 0.0, 0.5 );   
        glutSolidCube(1.0);   
        glPopMatrix();  
        glPopMatrix();
        
        //index finger
        glPushMatrix();
        glTranslatef(1.5 ,0.9, 0.0);   
        glRotatef((GLfloat) f2, 0.0, 1.0, 0.0);  
        glRotatef((GLfloat) iz, 0.0, 0.0, 1.0);   
        glTranslatef(0.4, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.9,0.4,0.4);   
        glColor3f( 0.0, 0.5, 0.1 );   
        glutSolidCube(1.0);   
        glPopMatrix();
        
        glTranslatef(0.7, 0.0, 0.0);   
        glRotatef((GLfloat) f2, 0.0, 1.0, 0.0);   
        glTranslatef(0.4, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.9,0.4,0.4);   
        glColor3f( 0.0, 0.5, 0.1 );    
        glutSolidCube(1.0);   
        glPopMatrix();

        glTranslatef(0.7, 0.0, 0.0);   
        glRotatef((GLfloat) f2, 0.0, 1.0, 0.0);   
        glTranslatef(0.4, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.9,0.4,0.4);   
        glColor3f( 0.0, 0.5, 0.1 );    
        glutSolidCube(1.0);   
        glPopMatrix();
        glPopMatrix();
         
        //ring finger
        glPushMatrix();
        glTranslatef(1.5, -0.3, 0.0);   
        glRotatef((GLfloat) f3, 0.0, 1.0, 0.0); 
        glRotatef((GLfloat) rz, 0.0, 0.0, 1.0);     
        glTranslatef(0.4, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.9,0.4,0.4);   
        glColor3f( 0.0, 0.5, 1.1 );   
        glutSolidCube(1.0);   
        glPopMatrix();
        
        glTranslatef(0.7, 0.0, 0.0);   
        glRotatef((GLfloat) f3, 0.0, 1.0, 0.0);   
        glTranslatef(0.4, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.9,0.4,0.4);   
        glColor3f( 0.0, 0.5, 1.1 );   
        glutSolidCube(1.0);   
        glPopMatrix();

        glTranslatef(0.7, 0.0, 0.0);   
        glRotatef((GLfloat) f3, 0.0, 1.0, 0.0);   
        glTranslatef(0.4, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.9,0.4,0.4);   
        glColor3f( 0.0, 0.5, 1.1 );   
        glutSolidCube(1.0);   
        glPopMatrix();
        glPopMatrix();

        //thumb
        glPushMatrix();
        glTranslatef(-0.6, 1.45, 0.0);   
        glRotatef((GLfloat) f4, 0.0, 0.4, 1.0); 
        glRotatef((GLfloat) tz, 0.0, 0.0, 1.0);     
        glTranslatef(0.2, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.7,0.4,0.4);   
        glColor3f( 1.0, 1.5, 0.1 );   
        glutSolidCube(1.0);   
        glPopMatrix();
        
        glTranslatef(0.7, 0.0, 0.0);   
        glRotatef((GLfloat) f4, 0.0, 0.4, 1.0);   
        glTranslatef(0.2, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.7,0.4,0.4);   
        glColor3f( 1.0, 1.5, 0.1 );   
        glutSolidCube(1.0);   
        glPopMatrix();

        glTranslatef(0.7, 0.0, 0.0);   
        glRotatef((GLfloat) f4, 0.0, 0.4, 1.0);   
        glTranslatef(0.2, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.7,0.4,0.4);   
        glColor3f( 1.0, 1.5, 0.1 );   
        glutSolidCube(1.0);   
        glPopMatrix();
        glPopMatrix();

        //little finger
        glPushMatrix();
        glTranslatef(1.57, -0.9, 0.0);   
        glRotatef((GLfloat) f5, 0.0, 1.0, 0.0); 
        glRotatef((GLfloat) lz, 0.0, 0.0, 1.0);     
        glTranslatef(0.2, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.7,0.35,0.4);   
        glColor3f( 1.0, 0.5, 1.1 );   
        glutSolidCube(1.0);   
        glPopMatrix();
        
        glTranslatef(0.7, 0.0, 0.0);   
        glRotatef((GLfloat) f5, 0.0, 1.0, 0.0);   
        glTranslatef(0.2, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.7,0.35,0.4);   
        glColor3f( 1.0, 0.5, 1.1 );   
        glutSolidCube(1.0);   
        glPopMatrix();

        glTranslatef(0.7, 0.0, 0.0);   
        glRotatef((GLfloat) f5, 0.0, 1.0, 0.0);   
        glTranslatef(0.2, 0.0, 0.0);   
        glPushMatrix();   
          glScalef(0.7,0.35,0.4);   
        glColor3f( 1.0, 0.5, 1.1);   
        glutSolidCube(1.0);   
        glPopMatrix();


        glPopMatrix(); 
        glPopMatrix();   
        glFlush();   
        glutSwapBuffers();   
    }   
       
    void reshape(int w, int h)   
    {   
        glViewport(0,0, (GLsizei) w, (GLsizei) h);   
        glMatrixMode(GL_PROJECTION);   
        glLoadIdentity();   
        gluPerspective(65.0, (GLfloat) w/(GLfloat) h,1.0, 20.0);   
        glMatrixMode(GL_MODELVIEW);   
        glLoadIdentity();   
        glTranslatef(0.0, 0.0, -5.0);   
    }   
    
    void arrow(int key, int x, int y)
    {
        switch(key)
        {
            case GLUT_KEY_UP:
            tb+=0.1;
            break;
            case GLUT_KEY_DOWN:
            tb-=0.1;
            break;
            case GLUT_KEY_LEFT:
            ta-=0.1;
            break;
            case GLUT_KEY_RIGHT:
            ta+=0.1;
            break;
        }

    glutPostRedisplay();

    }   
    void keyboard(unsigned char key, int x, int y)   
    {   
        switch (key)   
        { 
        case 'c':    
            wrist2 = (wrist2 + 3) %360; 
            glutPostRedisplay();   
            break;   
        case 'C': 
            wrist2 = (wrist2 - 3) %360;   
            glutPostRedisplay();   
            break;      
        case 'x':    
            wrist = (wrist + 3) %360; 
            glutPostRedisplay();   
            break;   
        case 'X': 
            wrist = (wrist - 3) %360;   
            glutPostRedisplay();   
            break;    
        case 'w':    
            palm = (palm + 3) %360; 
            glutPostRedisplay();   
            break;   
        case 'W': 
            palm = (palm - 3) %360;   
            glutPostRedisplay();   
            break;
        case 's': 
            sx=sx-0.1;  
            sy=sy-0.1;
            sz=sz-0.1; 
            glutPostRedisplay();   
            break;   
        case 'S': 
            sx=sx+0.1;  
            sy=sy+0.1;
            sz=sz+0.1;   
            glutPostRedisplay();   
            break;    
        case 'm': 
            f1 = (f1 + 3) %90;   
            glutPostRedisplay();   
            break;   
        case 'M': 
            f1 = (f1 - 3) %90;   
            glutPostRedisplay();   
            break;
        case 'i': 
            f2 = (f2 + 3) %90;   
            glutPostRedisplay();   
            break;  
        case 'I': 
            f2 = (f2 - 3) %90;   
            glutPostRedisplay();   
            break;
        case 'r': 
            f3 = (f3 + 3) %90;   
            glutPostRedisplay();   
            break;  
        case 'R': 
            f3 = (f3 - 3) %90;   
            glutPostRedisplay();   
            break;              
        case 'z':  
            rotateall = (rotateall - 3) %360;   
            glutPostRedisplay();   
            break;  
        case 'Z':   
            rotateall = (rotateall + 3) %360;   
            glutPostRedisplay();   
            break;
        case 't': 
            f4 = (f4 + 3) %70;   
            glutPostRedisplay();   
            break;  
        case 'T': 
            f4 = (f4 - 3) %70;   
            glutPostRedisplay();   
            break;              
        case 'l':  
            f5 = (f5 + 3) %20;   
            glutPostRedisplay();   
            break;  
        case 'L':   
            f5 = (f5 - 3) %90;   
            glutPostRedisplay();   
            break;    
        case 'o':
            f1=f2=f3=f4=f5=rotateall=palm=wrist=wrist2=0;
            sx=sy=sz=1;
            glutPostRedisplay();
            break;                 

        default:   
            break;   
        }   
    }   
       
    int main( int argc, char** argv )   
    {   
        glutInit(&argc,argv);   
       
        // We're going to animate it, so double buffer    
        glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);   
       
        // Window position (from top corner), and size (width% and hieght)   
        glutInitWindowSize(800, 500 );   
        glutInitWindowPosition( 10, 10 );   
        glutCreateWindow( argv[0] );   
       
        // Initialize OpenGL as we like it..   
        init();   
       
        // call this whenever window needs redrawing   
        glutDisplayFunc( display );   
       
        // Set up the callback function for resizing windows   
        glutReshapeFunc( reshape );   
       
        // Set up callback functions for key presses   
        glutKeyboardFunc( keyboard );   // Handles "normal" ascii symbols   
        glutSpecialFunc( arrow );
    //  fprintf(stdout, "Arrow keys control speed.  Press \"r\" to run,  \"s\" to single step.\n");   
        glEnable(GL_DEPTH_TEST);  
          
        glutMainLoop();   
       
         
    }  

