/* #include <GL/glut.h>
#include <math.h>

// Golden ratio for icosahedron
#define PHI 1.618033988749895

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glEnable(GL_DEPTH_TEST);
}

void drawIcosahedron() {
    // Vertices of icosahedron
    float vertices[12][3] = {
        {0, 1, PHI}, {0, -1, PHI}, {0, 1, -PHI}, {0, -1, -PHI},
        {1, PHI, 0}, {-1, PHI, 0}, {1, -PHI, 0}, {-1, -PHI, 0},
        {PHI, 0, 1}, {-PHI, 0, 1}, {PHI, 0, -1}, {-PHI, 0, -1}
    };

    // Faces of icosahedron
    int faces[20][3] = {
        {0,1,8}, {0,8,4}, {0,4,5}, {0,5,9}, {0,9,1},
        {1,7,8}, {8,7,6}, {8,6,4}, {4,6,10}, {4,10,5},
        {5,10,2}, {5,2,11}, {5,11,9}, {9,11,7}, {9,7,1},
        {3,2,6}, {3,6,7}, {3,7,11}, {3,11,2}, {2,10,6}
    };

    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 3; j++) {
            glVertex3fv(vertices[faces[i][j]]);
        }
    }
    glEnd();
}

void drawOctahedron() {
    // Vertices of octahedron
    float vertices[6][3] = {
        {1,0,0}, {-1,0,0},
        {0,1,0}, {0,-1,0},
        {0,0,1}, {0,0,-1}
    };

    // Faces of octahedron
    int faces[8][3] = {
        {4,0,2}, {4,2,1}, {4,1,3}, {4,3,0},
        {5,2,0}, {5,1,2}, {5,3,1}, {5,0,3}
    };

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 3; j++) {
            glVertex3fv(vertices[faces[i][j]]);
        }
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set up camera
    gluLookAt(3.0, 3.0, 3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    // Draw both shapes
    glPushMatrix();
    glTranslatef(-1.5, 0, 0);
    drawIcosahedron();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.5, 0, 0);
    drawOctahedron();
    glPopMatrix();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (float)w/(float)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Regular Polyhedra");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
*/
/*

#include <GL/glut.h>
#include <math.h>

float angleX = 0.0f;
float angleY = 0.0f;

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glEnable(GL_DEPTH_TEST);
}

void drawWireframeSphere(float radius, int lats, int longs) {
    float lat0, lat1, lng0, lng1;
    float x, y, z;

    // Draw latitude lines
    for(int i = 0; i <= lats; i++) {
        lat0 = M_PI * (-0.5 + (float)(i - 1) / lats);
        lat1 = M_PI * (-0.5 + (float)i / lats);

        glBegin(GL_LINE_STRIP);
        for(int j = 0; j <= longs; j++) {
            lng0 = 2 * M_PI * (float)j / longs;

            x = radius * cos(lat1) * cos(lng0);
            y = radius * sin(lat1);
            z = radius * cos(lat1) * sin(lng0);
            glVertex3f(x, y, z);
        }
        glEnd();
    }

    // Draw longitude lines
    for(int j = 0; j <= longs; j++) {
        lng0 = 2 * M_PI * (float)j / longs;

        glBegin(GL_LINE_STRIP);
        for(int i = 0; i <= lats; i++) {
            lat0 = M_PI * (-0.5 + (float)i / lats);

            x = radius * cos(lat0) * cos(lng0);
            y = radius * sin(lat0);
            z = radius * cos(lat0) * sin(lng0);
            glVertex3f(x, y, z);
        }
        glEnd();
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set up camera
    gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glRotatef(angleX, 1.0f, 0.0f, 0.0f);
    glRotatef(angleY, 0.0f, 1.0f, 0.0f);

    glColor3f(0.0, 1.0, 0.0);
    drawWireframeSphere(1.0, 20, 20);

    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 'w': angleX += 5.0f; break;
        case 's': angleX -= 5.0f; break;
        case 'a': angleY -= 5.0f; break;
        case 'd': angleY += 5.0f; break;
    }
    glutPostRedisplay();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (float)w/(float)h, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Wireframe Sphere");

    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
*/


/*
#include <GL/glut.h>
#include <math.h>

float angleX = 0.0f;
float angleY = 0.0f;

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glEnable(GL_DEPTH_TEST);
}

void drawEllipsoid(float a, float b, float c, int slices, int stacks) {
    float u, v;
    float du = 2 * M_PI / slices;
    float dv = M_PI / stacks;

    for(int i = 0; i < slices; i++) {
        u = i * du;

        glBegin(GL_LINE_STRIP);
        for(int j = 0; j <= stacks; j++) {
            v = j * dv - M_PI/2;

            float x = a * cos(v) * cos(u);
            float y = b * cos(v) * sin(u);
            float z = c * sin(v);

            glVertex3f(x, y, z);
        }
        glEnd();
    }

    for(int j = 0; j < stacks; j++) {
        v = j * dv - M_PI/2;

        glBegin(GL_LINE_STRIP);
        for(int i = 0; i <= slices; i++) {
            u = i * du;

            float x = a * cos(v) * cos(u);
            float y = b * cos(v) * sin(u);
            float z = c * sin(v);

            glVertex3f(x, y, z);
        }
        glEnd();
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glRotatef(angleX, 1.0f, 0.0f, 0.0f);
    glRotatef(angleY, 0.0f, 1.0f, 0.0f);

    glColor3f(0.0, 1.0, 0.0);
    drawEllipsoid(1.0, 0.75, 0.5, 30, 30);

    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 'w': angleX += 5.0f; break;
        case 's': angleX -= 5.0f; break;
        case 'a': angleY -= 5.0f; break;
        case 'd': angleY += 5.0f; break;
    }
    glutPostRedisplay();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (float)w/(float)h, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Ellipsoid Surface");

    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}


*/

#include <GL/glut.h>
#include <math.h>

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    gluOrtho2D(0, 800, 0, 600);
}

void setPixel(int x, int y) {
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void DDALine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xIncrement = dx / (float)steps;
    float yIncrement = dy / (float)steps;

    float x = x1;
    float y = y1;

    for(int i = 0; i <= steps; i++) {
        setPixel(round(x), round(y));
        x += xIncrement;
        y += yIncrement;
    }
}

void drawGrid() {
    glColor3f(1.0, 1.0, 1.0);

    // Draw horizontal lines
    int spacing = 50;
    for(int y = 0; y <= 600; y += spacing) {
        DDALine(0, y, 800, y);
    }

    // Draw vertical lines
    for(int x = 0; x <= 800; x += spacing) {
        DDALine(x, 0, x, 600);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawGrid();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("DDA Line Grid");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}