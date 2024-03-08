#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0xCC8 - 0xCB2)
// BlueprintGeneratedClass BP_Projectile_LocalPredicted.BP_Projectile_LocalPredicted_C
class ABP_Projectile_LocalPredicted_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_A8A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Projectile_LocalPredicted_C*       ReplicatedProjectile;                              // 0xCC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Projectile_LocalPredicted_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Projectile_LocalPredicted(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Is_Projectile_Instigator_Locally_Controlled_IsLocallyControlled, bool CallFunc_BooleanAND_ReturnValue);
};

}


