///////////////////////////////////////////////////////////////////////////////
//	File Name:		MrcpTasks.cpp
//
//	Description:	 class implementation
//
//	Declared in this file:
//		various lightweight objects
//
//	Implemented in this file:
//
///////////////////////////////////////////////////////////////////////////////
//	Revisions:
//	Date		Initial 	Description
//	----		------- 	-----------
//
///////////////////////////////////////////////////////////////////////////////
#include "MrcpTasks.h"
#include "ClientInterfaceDefs.h"


namespace MrcpV2RefLib
{
////////////////////////////////////////////////////////////////////////// 
//
// Description - Constructor
// Input - signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

MrcpTasks::MrcpTasks( AMrcpSignaling* a_signalObj) 
   : m_signalObj( a_signalObj)
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

MrcpTasks::~MrcpTasks()
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingStartCommand
// Input - signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingStartCommand::CSignalingStartCommand( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor CSignalingStartCommand
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingStartCommand::~CSignalingStartCommand()
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingStartCommand Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

void CSignalingStartCommand::Execute()
{
   m_signalObj->Start();
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingReinviteCommand
// Input - signaling object pointer
//         resource type
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingReinviteCommand::CSignalingReinviteCommand( AMrcpSignaling* a_signalObj,MrcpResourceType a_resourceToAdd)
   : MrcpTasks( a_signalObj)
   , m_resourceToAdd(a_resourceToAdd)
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor CSignalingReinviteCommand
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingReinviteCommand::~CSignalingReinviteCommand()
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingReinviteCommand Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

void CSignalingReinviteCommand::Execute()
{
   m_signalObj->Reinvite(m_resourceToAdd);
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingConnectCommand
// Input - signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingConnectCommand::CSignalingConnectCommand( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor CSignalingConnectCommand
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingConnectCommand::~CSignalingConnectCommand()
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingConnectCommand Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

void CSignalingConnectCommand::Execute()
{
   m_signalObj->Connect();
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingOnStartedEvent
// Input - signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingOnStartedEvent::CSignalingOnStartedEvent( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor CSignalingOnStartedEvent
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingOnStartedEvent::~CSignalingOnStartedEvent()
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingOnStartedEvent Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
void CSignalingOnStartedEvent::Execute()
{
   m_signalObj->OnSignalingStarted();
}
//////////////////////////////////////////////////////////////////////////
//
// Description - CSignalingOnRedirectEvent
// Input - signaling object pointer
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////

CSignalingOnRedirectEvent::CSignalingOnRedirectEvent( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
//////////////////////////////////////////////////////////////////////////
//
// Description - Destructor CSignalingOnRedirectEvent
// Input - None
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////

CSignalingOnRedirectEvent::~CSignalingOnRedirectEvent()
{
}

//////////////////////////////////////////////////////////////////////////
//
// Description - CSignalingOnRedirectEvent Execute
// Input - None
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////
void CSignalingOnRedirectEvent::Execute()
{
   m_signalObj->OnSignalingRedirect();
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingOnFailedEvent
// Input - signaling object pointer
//         
// Output - None
//          Called if socket connection to server fails
///////////////////////////////////////////////////////////////////////////

CSignalingOnFailedEvent::CSignalingOnFailedEvent( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor CSignalingOnFailedEvent
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingOnFailedEvent::~CSignalingOnFailedEvent()
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingOnFailedEvent Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
void CSignalingOnFailedEvent::Execute()
{
   m_signalObj->OnSignalingFailed();
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingOnConnectedEvent
// Input - Signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingOnConnectedEvent::CSignalingOnConnectedEvent( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor CSignalingOnConnectedEvent
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingOnConnectedEvent::~CSignalingOnConnectedEvent()
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingOnConnectedEvent Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
void CSignalingOnConnectedEvent::Execute()
{
   m_signalObj->OnSignalingConnected();
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingOnAvailableEvent
// Input - Signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingOnAvailableEvent::CSignalingOnAvailableEvent( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor CSignalingOnAvailableEvent
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingOnAvailableEvent::~CSignalingOnAvailableEvent()
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - CSignalingOnAvailableEvent Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
void CSignalingOnAvailableEvent::Execute()
{
   m_signalObj->OnSignalingAvailable();
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Constructor
// Input - Signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
CSignalingStopCommand::CSignalingStopCommand( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
CSignalingStopCommand::~CSignalingStopCommand()
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
void CSignalingStopCommand::Execute()
{
   m_signalObj->SignalingStop();
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Constructor
// Input - Signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
CSignalingAckCommand::CSignalingAckCommand( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
CSignalingAckCommand::~CSignalingAckCommand()
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
void CSignalingAckCommand::Execute()
{
   m_signalObj->SignalingAck();
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Constructor
// Input - Signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
CSignalingOnStoppedEvent::CSignalingOnStoppedEvent( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingOnStoppedEvent::~CSignalingOnStoppedEvent()
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

void CSignalingOnStoppedEvent::Execute()
{
   m_signalObj->OnSignalingStopped();
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Constructor
// Input - Signaling object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
CSignalingDisconnectCommand::CSignalingDisconnectCommand( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
CSignalingDisconnectCommand::~CSignalingDisconnectCommand()
{
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
void CSignalingDisconnectCommand::Execute()
{
   m_signalObj->SignalingDisconnect();
}

////////////////////////////////////////////////////////////////////////// 
//
// Description - Constructor
// Input - Signaling Object pointer
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////
CSignalingOnDisconnectedEvent::CSignalingOnDisconnectedEvent( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Destructor
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

CSignalingOnDisconnectedEvent::~CSignalingOnDisconnectedEvent()
{
}
////////////////////////////////////////////////////////////////////////// 
//
// Description - Execute
// Input - None
//         
// Output - None
//          
///////////////////////////////////////////////////////////////////////////

void CSignalingOnDisconnectedEvent::Execute()
{
   m_signalObj->OnSignalingDisconnected();
}
//////////////////////////////////////////////////////////////////////////
//
// Description - Constructor
// Input - Signaling Object pointer
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////
CSignalingUnsolicitedByeAck::CSignalingUnsolicitedByeAck( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
//////////////////////////////////////////////////////////////////////////
//
// Description - Destructor
// Input - None
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////

CSignalingUnsolicitedByeAck::~CSignalingUnsolicitedByeAck()
{
}
//////////////////////////////////////////////////////////////////////////
//
// Description - Execute
// Input - None
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////

void CSignalingUnsolicitedByeAck::Execute()
{
   m_signalObj->OnSignalingUnsolicitedBye();
}
//////////////////////////////////////////////////////////////////////////
//
// Description - Constructor
// Input - Signaling Object pointer
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////
CSignalingUnsolicitedByeStop::CSignalingUnsolicitedByeStop( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
//////////////////////////////////////////////////////////////////////////
//
// Description - Destructor
// Input - None
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////

CSignalingUnsolicitedByeStop::~CSignalingUnsolicitedByeStop()
{
}
//////////////////////////////////////////////////////////////////////////
//
// Description - Execute
// Input - None
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////

void CSignalingUnsolicitedByeStop::Execute()
{
   m_signalObj->OnSignalingUnsolicitedByeStop();
}

//////////////////////////////////////////////////////////////////////////
//
// Description - Constructor
// Input - Signaling Object pointer
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////
CSignalingCommsFailed::CSignalingCommsFailed( AMrcpSignaling* a_signalObj)
   : MrcpTasks( a_signalObj)
{
}
//////////////////////////////////////////////////////////////////////////
//
// Description - Destructor
// Input - None
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////

CSignalingCommsFailed::~CSignalingCommsFailed()
{
}
//////////////////////////////////////////////////////////////////////////
//
// Description - Execute
// Input - None
//
// Output - None
//
///////////////////////////////////////////////////////////////////////////

void CSignalingCommsFailed::Execute()
{
   m_signalObj->OnCommsFail();
}

}  //end of namespace

