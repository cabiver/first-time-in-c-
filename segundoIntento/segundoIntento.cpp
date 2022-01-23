
#include <stdio.h>
#include <irrKlang.h>
#include <conio.h>

using namespace irrklang;

//#pragma comment(lib, "irrKlang.lib") // link with irrKlang.dll

int main(int argc, const char** argv)
{
	ISoundEngine* engine = createIrrKlangDevice();

	if (!engine)
	{
		printf("Could not startup engine\n");
		return 0; // error starting up the engine
	}

	engine->play2D("../media/something.mp3", true);
	// getout.ogg
	// In a loop, wait until user presses 'q' to exit or another key to
	// play another sound.

	printf("\nHello World!\n");

	do
	{
		//printf("Press any key to play some sound, press 'q' to quit.\n");

		// play a single sound
		//engine->play2D("../../media/bell.wav");
	} while (true);
	// getch() != 'q'
	engine->drop(); // delete engine
	return 0;
}