/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CResourceClientConfigItem.h
 *  PURPOSE:     Resource client-side (XML) configuration file item class
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#pragma once

#include "CGame.h"
#include "CResourceFile.h"
#include <list>

class CResourceClientConfigItem : public CResourceFile
{
public:
    CResourceClientConfigItem(class CResource* resource, const char* szShortName, const char* szResourceFileName, CXMLAttributes* xmlAttributes);
    ~CResourceClientConfigItem(void);

    bool            Start(void);
    bool            Stop(void);
    class CXMLNode* GetRoot(void) { return m_pXMLRootNode; }

private:
    class CXMLFile* m_pXMLFile;
    CXMLNode*       m_pXMLRootNode;

    bool m_bInvalid;            // it failed to load
};
