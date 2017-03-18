/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CBaseModelInfo.h"

class CSimpleModelInfo : public CBaseModelInfo {
public:
    RpAtomic      *m_apAtomics[3];
    float          m_afLodDistances[3];
    unsigned char  m_nNumAtomics;
    unsigned char  m_nVisibility; // 0 - invisible, 255 - fully visible
    unsigned short m_nFlags;

    //vtable

    void DeleteRwObject();
    void CreateInstance();
    void CreateInstance(RwMatrixTag* arg0);
    void GetRwObject();

    //funcs

    CSimpleModelInfo();
    void FindRelatedModel();
    RpAtomic* GetAtomicFromDistance(float distance);
    float GetLargestLodDistance();
    float GetNearDistance();
    void IncreaseAlpha();
    void Init();
    void SetAtomic(int number, RpAtomic* atomic);
    void SetLodDistances(float* distance);
    void SetupBigBuilding();
};

VALIDATE_SIZE(CSimpleModelInfo, 0x4C);
