#ifndef __testbedGUI__
#define __testbedGUI__

/**
@file
Subclass of ATC_CTA_testbed, which is generated by wxFormBuilder.
*/

#include "gui/testbed_gui.h"
#include <string>

//// end generated include

/** Implementing ATC_CTA_testbed */
class testbedGUI : public ATC_CTA_testbed
{
	protected:
		// Handlers for ATC_CTA_testbed events.
		void onMainStart(  wxActivateEvent& event );
		void onCTA_on_off( wxCommandEvent& event );
		void onJPEGqf( wxCommandEvent& event );
		void onATC_on_off( wxCommandEvent& event );
		void onEntropyCoding( wxCommandEvent& event );
		void onStartStop( wxCommandEvent& event );
	public:
		/** Constructor */
		testbedGUI( wxWindow* parent );
		void updateOBJ(std::string obj);
		void updateFPS(float fps);
	//// end generated class members
	
};

#endif // __testbedGUI__
