#pragma once

#include "CoreMinimal.h"
#include "ParagonRPG_ver2GameModeBase.h"
#include "VillageGameMode.generated.h"

UCLASS()
class PARAGONRPG_VER2_API AVillageGameMode : public AParagonRPG_ver2GameModeBase
{
	GENERATED_BODY()
	
private:

protected:
	virtual void BeginPlay() override;

public:
	AVillageGameMode();
};
