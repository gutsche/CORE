#ifndef SSSELECTIONS_H
#define SSSELECTIONS_H

#include <vector>
#include "Math/LorentzVector.h"
#include "CMS2.h"

/****************************************************************
***                                                           ***
***                                                           ***
***                                                           ***
***          2011 Selections                                  ***
***                                                           ***
***                                                           ***
***                                                           ***
****************************************************************/

/******************************************************************************************/     
// 2011 good lepton
/******************************************************************************************/     
bool isGoodLepton(int id, int idx);


/******************************************************************************************/     
// 2011 isolated lepton
/******************************************************************************************/     
bool isIsolatedLepton(int id, int idx);


/******************************************************************************************/     
// 2011 numerator lepton
/******************************************************************************************/     
bool isNumeratorLepton(int id, int idx);


/******************************************************************************************/     
// 2011 numerator hypothesis
/******************************************************************************************/     
bool isNumeratorHypothesis(int idx);


/*****************************************************************************************/
// require electron GSF, CTF and SC charges agree
/*****************************************************************************************/
bool passThreeChargeRequirement(int elIdx);


/******************************************************************************************/     
// is it a good jet?
/******************************************************************************************/     
bool isGoodJet(LorentzVector jetp4, int hypIdx, double ptCut, double absEtaCut, double dRCut, bool muJetClean);


/*****************************************************************************************/
// extra Z veto
/*****************************************************************************************/
bool makesExtraZ(int hypIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);







/****************************************************************
***                                                           ***
***                                                           ***
***                                                           ***
***          2010 Selections                                  ***
***                                                           ***
***                                                           ***
***                                                           ***
****************************************************************/

/******************************************************************************************/     
// good lepton (either mu or electron, no isolation cuts)
/******************************************************************************************/
bool isGoodLeptonNoIsoSS(int id, int lepIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);

/******************************************************************************************/     
// isolated lepton (either mu or electron, no ID cuts)
/******************************************************************************************/
bool isGoodLeptonwIsoSS(int id, int lepIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);

/******************************************************************************************/     
// are the leptons in the hypothesis good (all cuts but isolation?)
/******************************************************************************************/
bool isGoodHypNoIsoSS(int hypIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);

/******************************************************************************************/     
// are the leptons in the hypothesis isolated? (no ID or other cuts applied)
/******************************************************************************************/     
bool isGoodHypwIsoSS(int hypIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);

/*****************************************************************************************/
//passes the EGamma triggers
/*****************************************************************************************/
bool passEGTriggerSS(unsigned int hypIdx, bool mc);

/*****************************************************************************************/
//passes the muon triggers
/*****************************************************************************************/
bool passMuTriggerSS(unsigned int hypIdx, bool mc);


/******************************************************************************************/     
// good lepton (either mu or electron, no isolation cuts), d0 corrected for PV
/******************************************************************************************/
bool isGoodLeptonNoIsoSSd0PV(int id, int lepIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);

/******************************************************************************************/     
// are the leptons in the hypothesis good (all cuts but isolation?), d0 corrected for PV
/******************************************************************************************/
bool isGoodHypNoIsoSSd0PV(int hypIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);


/******************************************************************************************/     
// good lepton (either mu or electron, no isolation cuts), no d0 cut
/******************************************************************************************/
bool isGoodLeptonNoIsoSSnod0(int id, int lepIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);

/******************************************************************************************/     
// are the leptons in the hypothesis good (all cuts but isolation?), no d0 cut
/******************************************************************************************/
bool isGoodHypNoIsoSSnod0(int hypIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);

/******************************************************************************************/     
// good lepton (either mu or electron, no isolation cuts), no triple charge consistency requirement
/******************************************************************************************/
bool isGoodLeptonNoIsoSSnoTripleChargeReq(int id, int lepIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);

/******************************************************************************************/     
// are the leptons in the hypothesis good (all cuts but isolation?), no triple charge consistency requirement
/******************************************************************************************/
bool isGoodHypNoIsoSSnoTripleChargeReq(int hypIdx, bool applyAlignmentCorrection=false, bool removedEtaCutInEndcap=false);

/******************************************************************************************/     
// is muon a fakeable object
/******************************************************************************************/
bool isFakeableMuon(int index, bool useTightIsolation);

#endif

