#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x398 - 0x388)
// BlueprintGeneratedClass BP_EncounterMusic.BP_EncounterMusic_C
class ABP_EncounterMusic_C : public AEncounterMusic
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        EnemiesKilledThisWave;                             // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EnemiesSpawnedThisWave;                            // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EncounterMusic_C* GetDefaultObj();

	void HandleDefenseBeamHPUpdated(double NormalizedHealth, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast);
	void SubscribeToDefenseBeamHPUpdates(TSubclassOf<class IInterface> Temp_class_Variable, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Defense* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_StructurePartProxy_C* K2Node_DynamicCast_AsBP_Structure_Part_Proxy, bool K2Node_DynamicCast_bSuccess_2, class ANWXStructure* CallFunc_GetStructure_Structure, class ABP_Structure_EncounterTrigger_Defense_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense, bool K2Node_DynamicCast_bSuccess_3);
	void ServerHandleEncounterCombatEnded(class AEncounterBase* Encounter, bool CallFunc_IsCombatEncounter_ReturnValue, bool CallFunc_HasCustomIntensityUpdateLogic_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ServerHandleEncounterCombatStarted(class AEncounterBase* Encounter, bool CallFunc_IsCombatEncounter_ReturnValue, bool CallFunc_HasCustomIntensityUpdateLogic_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void TrySetEncounterIntensityByWaveNumbers(bool CallFunc_HasCustomIntensityUpdateLogic_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_ServerSetMusicIntensity_NewIntensity_ImplicitCast);
	void HandleWaveCreatureKilled(class ABP_CreatureBase_C* Creature, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable);
	void HandleWaveCreatureSpawned(class ABP_CreatureBase_C* Creature, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
	void PostInitialization(class UBP_EncounterComponent_Spawners_C* Spawner, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_MatchesTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UBP_EncounterComponent_Spawners_C* CallFunc_GetComponentByClass_ReturnValue);
};

}


