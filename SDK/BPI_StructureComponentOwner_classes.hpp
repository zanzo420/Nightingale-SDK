#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StructureComponentOwner.BPI_StructureComponentOwner_C
class IBPI_StructureComponentOwner_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StructureComponentOwner_C* GetDefaultObj();

	void CallHealthChangedEvent(const struct FStructureHealthChangedContext& HealthChangedContext);
	void GetEventsObject(class UStructureEventsObject** EventObject);
};

}


