#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x56 (0x1638 - 0x15E2)
// BlueprintGeneratedClass BP_Creature_Wildlife_Wolf.BP_Creature_Wildlife_Wolf_C
class ABP_Creature_Wildlife_Wolf_C : public ABP_Creature_Wildlife_C
{
public:
	uint8                                        Pad_315F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_AudioFocusMixingComponent_C*       BP_AudioFocusMixingComponent;                      // 0x15E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WP_Indicator1;                                     // 0x15F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WP_Indicator;                                      // 0x15F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Heart;                                             // 0x1600(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_RearRight;                                 // 0x1608(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_RearLeft;                                  // 0x1610(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Right;                                     // 0x1618(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Left;                                      // 0x1620(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x1628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x1630(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Wildlife_Wolf_C* GetDefaultObj();

	void Start_WP_Indicator();
	void UserConstructionScript(class FName Socket_Root);
};

}


