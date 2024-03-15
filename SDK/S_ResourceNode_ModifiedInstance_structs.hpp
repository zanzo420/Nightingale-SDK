#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x24 - 0x0)
// UserDefinedStruct S_ResourceNode_ModifiedInstance.S_ResourceNode_ModifiedInstance
struct FS_ResourceNode_ModifiedInstance
{
public:
	int32                                        InstanceID_2_37B67ED64D32EB9504DF59BBD98ADFA2;     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TurnDepleted_4_2D3E667C425C7005FC0BD0B25240732C;   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanRegrow_7_DE7F16024B32B9FE2955CFBCCD12000E;      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Depleted_9_67B03FB74A9A850B91423396BF11F7BE;       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FullyGrown_24_222F3EB3444BE9383A913694ECE0D5E2;    // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_78DA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Health_14_FD836F7240B88B314D130FBD5D603718;        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastChangeInHealth_16_B3D48ECD429929007BFC5CA68AF0E85B; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_78DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            LastDamageCauser_19_029DB55A46E692786BA740AD215BCC30; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentResourceCharges_22_749030AF48A2FE520EC9FE83CB57A71C; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


