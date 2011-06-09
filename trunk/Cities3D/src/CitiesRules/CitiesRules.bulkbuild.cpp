#include "stdwx.h"

// This file must come first.
#include "Strings.cpp"

#include "AlchemistDialog.cpp"
#include "AqueductDialog.cpp"
#include "BankDataCities.cpp"
#include "BarbarianDelayName.cpp"
#include "BarbarianDelayOptions.cpp"
#include "BarbarianUI.cpp"
#include "BuildDataCities.cpp"
#include "CitiesGoldOption.cpp"
#include "CitiesKeyMaps.cpp"
#include "CitiesName.cpp"
#include "CitiesOptions.cpp"
#include "CitiesOverview.cpp"
#include "CitiesRules.cpp"
#include "CitiesSeafarersOptions.cpp"
#include "CitiesStats.cpp"
#include "CitiesUI.cpp"
#include "CommercialHarborCommodityDialog.cpp"
#include "CommercialHarborPlayerDialog.cpp"
#include "CommercialHarborResourceDialog.cpp"
#include "DeserterPlayerDialog.cpp"
#include "DiscardProgressCardListCtrl.cpp"
#include "DiscardProgressCardsDialog.cpp"
#include "DrawKnightObject.cpp"
#include "DrawMerchantObject.cpp"
#include "DrawMetropolisObject.cpp"
#include "DrawWallsObject.cpp"
#include "ImageSetsCities.cpp"
#include "ImageSetsPolitics.cpp"
#include "ImageSetsScience.cpp"
#include "ImageSetsTrade.cpp"
#include "KnightCount.cpp"
#include "KnightErrantName.cpp"
#include "KnightErrantOptions.cpp"
#include "LogicBarbarianAdvance.cpp"
#include "LogicBarbarianAdvanceBarbarianDelay.cpp"
#include "LogicCanActivateKnight.cpp"
#include "LogicCanActivateKnightTurn.cpp"
#include "LogicCanAttackKnight.cpp"
#include "LogicCanAttackKnightTurn.cpp"
#include "LogicCanBuildKnight.cpp"
#include "LogicCanBuildKnightTurn.cpp"
#include "LogicCanBuildWalls.cpp"
#include "LogicCanBuildWallsTurn.cpp"
#include "LogicCanCommercialHarbor.cpp"
#include "LogicCanExpelCorner.cpp"
#include "LogicCanExpelCornerPirate.cpp"
#include "LogicCanExpelCornerRobber.cpp"
#include "LogicCanExpelKnight.cpp"
#include "LogicCanMoveKnight.cpp"
#include "LogicCanMoveKnightTurn.cpp"
#include "LogicCanPlace2Knight.cpp"
#include "LogicCanPlace3Knight.cpp"
#include "LogicCanPlaceActivateKnight.cpp"
#include "LogicCanPlaceKnight.cpp"
#include "LogicCanPlaceRobberCities.cpp"
#include "LogicCanPlaceWalls.cpp"
#include "LogicCanPurchaseActivateKnight.cpp"
#include "LogicCanPurchaseKnight.cpp"
#include "LogicCanPurchaseKnightUpgrade.cpp"
#include "LogicCanPurchaseRepairCity.cpp"
#include "LogicCanPurchaseUpgrade.cpp"
#include "LogicCanPurchaseWalls.cpp"
#include "LogicCanRepairCity.cpp"
#include "LogicCanShowCardCities.cpp"
#include "LogicCanUpgrade2Knight.cpp"
#include "LogicCanUpgrade2KnightTurn.cpp"
#include "LogicCanUpgrade3Knight.cpp"
#include "LogicCanUpgrade3KnightTurn.cpp"
#include "LogicCanUpgradeCommon.cpp"
#include "LogicCanUpgradePolitics.cpp"
#include "LogicCanUpgradePoliticsTurn.cpp"
#include "LogicCanUpgradeScience.cpp"
#include "LogicCanUpgradeScienceTurn.cpp"
#include "LogicCanUpgradeTrade.cpp"
#include "LogicCanUpgradeTradeTurn.cpp"
#include "LogicCardCountCities.cpp"
#include "LogicCardListCommon.cpp"
#include "LogicCardListPolitics.cpp"
#include "LogicCardListScience.cpp"
#include "LogicCardListTrade.cpp"
#include "LogicCardNamePolitics.cpp"
#include "LogicCardNameScience.cpp"
#include "LogicCardNameTrade.cpp"
#include "LogicCardTextDiplomatSeafarers.cpp"
#include "LogicCardTextPolitics.cpp"
#include "LogicCardTextScience.cpp"
#include "LogicCardTextTrade.cpp"
#include "LogicCostActivateKnight.cpp"
#include "LogicCostCityCities.cpp"
#include "LogicCostKnight.cpp"
#include "LogicCostKnightUpgrade.cpp"
#include "LogicCostRepairCity.cpp"
#include "LogicCostUpgradePolitics.cpp"
#include "LogicCostUpgradeScience.cpp"
#include "LogicCostUpgradeTrade.cpp"
#include "LogicCostWalls.cpp"
#include "LogicDiplomatPlaces.cpp"
#include "LogicGatherCityCities.cpp"
#include "LogicHasPreRollActionKnightErrant.cpp"
#include "LogicHasPreRollCardCities.cpp"
#include "LogicIntriguePlaces.cpp"
#include "LogicIsCardPlayableArsonist.cpp"
#include "LogicIsCardPlayableBishop.cpp"
#include "LogicIsCardPlayableCities.cpp"
#include "LogicIsCardPlayableCollection.cpp"
#include "LogicIsCardPlayableDeserter.cpp"
#include "LogicIsCardPlayableDiplomat.cpp"
#include "LogicIsCardPlayableEngineer.cpp"
#include "LogicIsCardPlayableIntrigue.cpp"
#include "LogicIsCardPlayableMasterMerchant.cpp"
#include "LogicIsCardPlayableSaboteur.cpp"
#include "LogicIsCardPlayableSpy.cpp"
#include "LogicIsCardPlayableWarlord.cpp"
#include "LogicIsCardPlayableWedding.cpp"
#include "LogicIsResouceBankTradeableCities.cpp"
#include "LogicIsResourceAqueductable.cpp"
#include "LogicIsResourceAqueductableCities.cpp"
#include "LogicIsResourceGoldableCitiesGold.cpp"
#include "LogicIsValidKnightPlacement.cpp"
#include "LogicKnightCounts.cpp"
#include "LogicKnightMovePlaces.cpp"
#include "LogicMerchantOwner.cpp"
#include "LogicPlaceInitialBlockCities.cpp"
#include "LogicPlaceSecondCityRoad.cpp"
#include "LogicRequestSecondCity.cpp"
#include "LogicRequestSecondRoad.cpp"
#include "LogicResourceCountCities.cpp"
#include "LogicResourceNameCities.cpp"
#include "LogicResourceOrderCities.cpp"
#include "LogicRollTextCities.cpp"
#include "LogicUpgradeName.cpp"
#include "MasterMerchantPlayerDialog.cpp"
#include "MasterMerchantResourceDialog.cpp"
#include "MerchantFleetDialog.cpp"
#include "NoMercyName.cpp"
#include "NoMercyOptions.cpp"
#include "PlayerDataCities.cpp"
#include "PlayerSelectionDialog.cpp"
#include "PlayProgressCardsDialog.cpp"
#include "PoliticsCardsName.cpp"
#include "PoliticsCardsOption.cpp"
#include "ProgressCardListCtrl.cpp"
#include "ResourceMonopolyDialog.cpp"
#include "RuleActivateKnight.cpp"
#include "RuleAqueduct.cpp"
#include "RuleAttackKnight.cpp"
#include "RuleAttackOpponentKnight.cpp"
#include "RuleBarbarianAdvance.cpp"
#include "RuleBarbarianAttack.cpp"
#include "RuleBeginTurnCities.cpp"
#include "RuleBuildKnight.cpp"
#include "RuleBuildKnightCommon.cpp"
#include "RuleBuildWalls.cpp"
#include "RuleChainCities.cpp"
#include "RuleCommercialHarbor.cpp"
#include "RuleContinueInitialCities.cpp"
#include "RuleDefenderPoint.cpp"
#include "RuleDiplomatText.cpp"
#include "RuleDiplomatTextSeafarers.cpp"
#include "RuleEndTurnCities.cpp"
#include "RuleExecuteAqueduct.cpp"
#include "RuleExecuteArsonist.cpp"
#include "RuleExecuteCardMerchantFleet.cpp"
#include "RuleExecuteCommercialHarbor.cpp"
#include "RuleExecuteDiscardCard.cpp"
#include "RuleExecuteExpelKnight.cpp"
#include "RuleExecuteExpelKnightSeafarers.cpp"
#include "RuleExecuteMasterMerchant.cpp"
#include "RuleExecuteMerchantPlacement.cpp"
#include "RuleExecuteProgressCard.cpp"
#include "RuleExecuteResourceMonopolyCard.cpp"
#include "RuleExecuteSpy.cpp"
#include "RuleExecuteTradeMonopolyCard.cpp"
#include "RuleExecuteWedding.cpp"
#include "RuleExpelKnight.cpp"
#include "RuleGenerateCities.cpp"
#include "RuleInitializeCities.cpp"
#include "RuleInitializeNoMercy.cpp"
#include "RuleMetropolis.cpp"
#include "RuleMoveKnight.cpp"
#include "RulePirateStealCitiesSeafarers.cpp"
#include "RulePlaceAttackedKnight.cpp"
#include "RulePlaceCityCities.cpp"
#include "RulePlaceDeserter.cpp"
#include "RulePlaceIntrigueKnight.cpp"
#include "RulePlaceKnight.cpp"
#include "RulePlaceKnightCommon.cpp"
#include "RulePlaceMoveKnight.cpp"
#include "RulePlaceRoadDiplomat.cpp"
#include "RulePlaceSecondCity.cpp"
#include "RulePlaceWalls.cpp"
#include "RulePlayCardAlchemist.cpp"
#include "RulePlayCardArsonist.cpp"
#include "RulePlayCardBishop.cpp"
#include "RulePlayCardCollection.cpp"
#include "RulePlayCardCommercialHarbor.cpp"
#include "RulePlayCardConstitution.cpp"
#include "RulePlayCardCrane.cpp"
#include "RulePlayCardDeserter.cpp"
#include "RulePlayCardDiplomat.cpp"
#include "RulePlayCardEngineer.cpp"
#include "RulePlayCardIntrigue.cpp"
#include "RulePlayCardInventor.cpp"
#include "RulePlayCardIrrigation.cpp"
#include "RulePlayCardMasterMerchant.cpp"
#include "RulePlayCardMedicine.cpp"
#include "RulePlayCardMerchant.cpp"
#include "RulePlayCardMerchantFleet.cpp"
#include "RulePlayCardMining.cpp"
#include "RulePlayCardPrinter.cpp"
#include "RulePlayCardResourceMonopoly.cpp"
#include "RulePlayCardRoadBuildingCities.cpp"
#include "RulePlayCardSaboteur.cpp"
#include "RulePlayCardSmith.cpp"
#include "RulePlayCardSpy.cpp"
#include "RulePlayCardTradeMonopoly.cpp"
#include "RulePlayCardVictoryPointCities.cpp"
#include "RulePlayCardWarlord.cpp"
#include "RulePlayCardWedding.cpp"
#include "RulePlayProgressCardEnd.cpp"
#include "RulePlayProgressCardStart.cpp"
#include "RulePrepareUICities.cpp"
#include "RuleProgressCardCommon.cpp"
#include "RuleProgressCards.cpp"
#include "RuleReduceCityCities.cpp"
#include "RuleRepairCity.cpp"
#include "RuleRequestSecondCity.cpp"
#include "RuleResetBarbarians.cpp"
#include "RuleRestartAlchemist.cpp"
#include "RuleRestartAqueduct.cpp"
#include "RuleRestartDiscardProgressCards.cpp"
#include "RuleRestartExecuteExpel.cpp"
#include "RuleRestartMetropolis.cpp"
#include "RuleRestartProgressCards.cpp"
#include "RuleRestartReduceCities.cpp"
#include "RuleRestartSecondCity.cpp"
#include "RuleRestartSecondCityRoad.cpp"
#include "RuleRestartSelectExpelKnight.cpp"
#include "RuleRestartTurn2Knight.cpp"
#include "RuleRestartTurn3Knight.cpp"
#include "RuleRestartTurnActivateKnight.cpp"
#include "RuleRestartTurnArsonist.cpp"
#include "RuleRestartTurnAttackKnightPlacement.cpp"
#include "RuleRestartTurnCommercialHarbor.cpp"
#include "RuleRestartTurnCommercialHarborTrade.cpp"
#include "RuleRestartTurnDeserter.cpp"
#include "RuleRestartTurnDeserterPlace.cpp"
#include "RuleRestartTurnDeserterSelect.cpp"
#include "RuleRestartTurnDiplomat.cpp"
#include "RuleRestartTurnDiplomatPlace.cpp"
#include "RuleRestartTurnIntrigue.cpp"
#include "RuleRestartTurnIntriguePlace.cpp"
#include "RuleRestartTurnInventor.cpp"
#include "RuleRestartTurnInventorChip.cpp"
#include "RuleRestartTurnKnightPlacement.cpp"
#include "RuleRestartTurnMasterMerchant.cpp"
#include "RuleRestartTurnMasterMerchantSteal.cpp"
#include "RuleRestartTurnMerchant.cpp"
#include "RuleRestartTurnMerchantFleet.cpp"
#include "RuleRestartTurnMoveAttackedKnight.cpp"
#include "RuleRestartTurnMoveKnightPlacement.cpp"
#include "RuleRestartTurnRepairCity.cpp"
#include "RuleRestartTurnResourceMonopoly.cpp"
#include "RuleRestartTurnSaboteur.cpp"
#include "RuleRestartTurnSelectAttackKnight.cpp"
#include "RuleRestartTurnSelectMoveKnight.cpp"
#include "RuleRestartTurnSpy.cpp"
#include "RuleRestartTurnSpySteal.cpp"
#include "RuleRestartTurnTradeMonopoly.cpp"
#include "RuleRestartTurnWallsPlacement.cpp"
#include "RuleRestartTurnWedding.cpp"
#include "RuleRobberStealCities.cpp"
#include "RuleRollDiceAlchemist.cpp"
#include "RuleRollDiceCities.cpp"
#include "RuleSelect2Knight.cpp"
#include "RuleSelect3Knight.cpp"
#include "RuleSelectActivateKnight.cpp"
#include "RuleSelectAlchemistDice.cpp"
#include "RuleSelectAttackKnight.cpp"
#include "RuleSelectCommercialHarborCommodity.cpp"
#include "RuleSelectCommercialHarborPlayer.cpp"
#include "RuleSelectCommercialHarborResource.cpp"
#include "RuleSelectDeserterKnight.cpp"
#include "RuleSelectDeserterPlayer.cpp"
#include "RuleSelectDiplomatRoad.cpp"
#include "RuleSelectDiplomatRoadCommon.cpp"
#include "RuleSelectDiplomatRoadSeafarers.cpp"
#include "RuleSelectExpelKnight.cpp"
#include "RuleSelectFirstInventorChip.cpp"
#include "RuleSelectIntrigueKnight.cpp"
#include "RuleSelectMasterMerchantPlayer.cpp"
#include "RuleSelectMetropolisCity.cpp"
#include "RuleSelectMoveKnight.cpp"
#include "RuleSelectProgressCards.cpp"
#include "RuleSelectReduceCity.cpp"
#include "RuleSelectRepairCity.cpp"
#include "RuleSelectSaboteurCity.cpp"
#include "RuleSelectSecondInventorChip.cpp"
#include "RuleSelectSpyPlayer.cpp"
#include "RuleUpgrade2Knight.cpp"
#include "RuleUpgrade3Knight.cpp"
#include "RuleUpgradeCommon.cpp"
#include "RuleUpgradePolitics.cpp"
#include "RuleUpgradeScience.cpp"
#include "RuleUpgradeTrade.cpp"
#include "ScienceCardsName.cpp"
#include "ScienceCardsOption.cpp"
#include "SelectProgressCardsDialog.cpp"
#include "SpyPlayerDialog.cpp"
#include "StealProgressCardListCtrl.cpp"
#include "StealProgressCardsDialog.cpp"
#include "TradeCardsName.cpp"
#include "TradeCardsOption.cpp"
#include "TradeMonopolyDialog.cpp"
#include "UpgradeUI.cpp"
#include "WeddingDialog.cpp"
