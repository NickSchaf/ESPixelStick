/*
* InputFPPRemotePlayList.cpp
*
* Project: ESPixelStick - An ESP8266 / ESP32 and E1.31 based pixel driver
* Copyright (c) 2021 Shelby Merrick
* http://www.forkineye.com
*
*  This program is provided free for you to use in any way that you wish,
*  subject to the laws and regulations where you are using it.  Due diligence
*  is strongly suggested before using this code.  Please give credit where due.
*
*  The Author makes no warranty of any kind, express or implied, with regard
*  to this program or the documentation contained in this document.  The
*  Author shall not be liable in any event for incidental or consequential
*  damages in connection with, or arising out of, the furnishing, performance
*  or use of these programs.
*
*   Playlist object used to parse and play a playlist
*/

#include "InputFPPRemotePlayList.hpp"
#include "../service/FPPDiscovery.h"
#include "../FileMgr.hpp"

//-----------------------------------------------------------------------------
void fsm_PlayList_state_Idle::Poll (uint8_t * Buffer, size_t BufferSize)
{
    DEBUG_START;

    // do nothing

    DEBUG_END;

} // fsm_PlayList_state_Idle::Poll

//-----------------------------------------------------------------------------
void fsm_PlayList_state_Idle::Init (c_InputFPPRemotePlayList* Parent)
{
    DEBUG_START;

    pInputFPPRemotePlayList = Parent;
    pInputFPPRemotePlayList->pCurrentFsmState = &(Parent->fsm_PlayList_state_Idle_imp);

    DEBUG_END;

} // fsm_PlayList_state_Idle::Init

//-----------------------------------------------------------------------------
void fsm_PlayList_state_Idle::Start (String & FileName, uint32_t FrameId)
{
    DEBUG_START;

    do // once
    {
        // open the playlist file
        String FileData;
        if (0 == FileMgr.ReadSdFile (FileName, FileData))
        {
            LOG_PORT.println (String (F ("Could not read Playlist file: '")) + FileName + "'");
            break;
        }
        DEBUG_V ("");

        pInputFPPRemotePlayList->PlayListFile = FileName;
        /*
        DeserializationError error = deserializeJson (pInputFPPRemotePlayList->JsonPlayList, (const String)FileData);

        DEBUG_V ("Error Check");
        if (error)
        {
            String CfgFileMessagePrefix = String (F ("SD file: '")) + FileName + "' ";
            LOG_PORT.println (String (F ("Heap:")) + String (ESP.getFreeHeap ()));
            LOG_PORT.println (CfgFileMessagePrefix + String (F ("Deserialzation Error. Error code = ")) + error.c_str ());
            LOG_PORT.println (String (F ("++++")) + FileData + String (F ("----")));
            break;
        }
*/
        // set context to the first entry in the file

        // do the first item in the file

    } while (false);

    DEBUG_END;

} // fsm_PlayList_state_Idle::Start

//-----------------------------------------------------------------------------
void fsm_PlayList_state_Idle::Stop (void)
{
    DEBUG_START;

    // Do nothing

    DEBUG_END;

} // fsm_PlayList_state_Idle::Stop

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void fsm_PlayList_state_PlayingFile::Poll (uint8_t * Buffer, size_t BufferSize)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_PlayingFile::Poll

//-----------------------------------------------------------------------------
void fsm_PlayList_state_PlayingFile::Init (c_InputFPPRemotePlayList* Parent)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_PlayingFile::Init

//-----------------------------------------------------------------------------
void fsm_PlayList_state_PlayingFile::Start (String & FileName, uint32_t FrameId)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_PlayingFile::Start

//-----------------------------------------------------------------------------
void fsm_PlayList_state_PlayingFile::Stop (void)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_PlayingFile::Stop

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void fsm_PlayList_state_PlayingEffect::Poll (uint8_t * Buffer, size_t BufferSize)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_PlayingEffect::Poll

//-----------------------------------------------------------------------------
void fsm_PlayList_state_PlayingEffect::Init (c_InputFPPRemotePlayList* Parent)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_PlayingEffect::Init

//-----------------------------------------------------------------------------
void fsm_PlayList_state_PlayingEffect::Start (String & FileName, uint32_t FrameId)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_PlayingEffect::Start

//-----------------------------------------------------------------------------
void fsm_PlayList_state_PlayingEffect::Stop (void)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_PlayingEffect::Stop

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void fsm_PlayList_state_Paused::Poll (uint8_t* Buffer, size_t BufferSize)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_Paused::Poll

//-----------------------------------------------------------------------------
void fsm_PlayList_state_Paused::Init (c_InputFPPRemotePlayList* Parent)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_Paused::Init

//-----------------------------------------------------------------------------
void fsm_PlayList_state_Paused::Start (String& FileName, uint32_t FrameId)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_Paused::Start

//-----------------------------------------------------------------------------
void fsm_PlayList_state_Paused::Stop (void)
{
    DEBUG_START;

    DEBUG_END;

} // fsm_PlayList_state_Paused::Stop