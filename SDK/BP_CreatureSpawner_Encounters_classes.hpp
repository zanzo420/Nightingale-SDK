#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x1651 - 0x1648)
// BlueprintGeneratedClass BP_CreatureSpawner_Encounters.BP_CreatureSpawner_Encounters_C
class ABP_CreatureSpawner_Encounters_C : public ABP_CreatureSpawnerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DestroyWhenAllCreaturesDestroyed;                  // 0x1650(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CreatureSpawner_Encounters_C* GetDefaultObj();

	void DestroySelfIfRequired();
	void ReceiveBeginPlay();
	void GetLatentSpawnLocation();
	void ExecuteUbergraph_BP_CreatureSpawner_Encounters(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


