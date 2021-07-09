#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ParagonRPG_ver2GameModeBase.generated.h"

UCLASS()
class PARAGONRPG_VER2_API AParagonRPG_ver2GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	class UUserWidget* m_mainWidget = nullptr;

public:
	AParagonRPG_ver2GameModeBase();

	virtual void BeginPlay() override;
};
