#ifndef SSSELECTIONS_H
#define SSSELECTIONS_H

#include <vector>
#include "Math/LorentzVector.h"
#include "CMS2.h"
#include "jetSelections.h"

namespace samesign {

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
    bool isGoodLepton(int id, int idx, int vidx = -1);


/******************************************************************************************/     
// 2011 isolated lepton
/******************************************************************************************/     
    bool isIsolatedLepton(int id, int idx, int vidx = -1);


/******************************************************************************************/     
// 2011 numerator lepton
/******************************************************************************************/     
    bool isNumeratorLepton(int id, int idx, int vidx = -1);


/******************************************************************************************/     
// 2011 numerator hypothesis
/******************************************************************************************/     
    bool isNumeratorHypothesis(int idx, int vidx = -1);


/******************************************************************************************/     
// 2011 denominator lepton
/******************************************************************************************/     
    bool isDenominatorLepton(int id, int idx, int vidx = -1);


/*****************************************************************************************/
// require electron GSF, CTF and SC charges agree
/*****************************************************************************************/
    bool passThreeChargeRequirement(int elIdx);


/*****************************************************************************************/
// get jets and perform overlap removal with numerator e/mu with pt > x (defaults are 10/5 GeV)
/*****************************************************************************************/
    std::vector<LorentzVector> getJets(int idx, enum JetType type, double deltaR, double min_pt, double max_eta, double mu_minpt = 5, double ele_minpt = 10);

/*****************************************************************************************/
// get jets and apply an on-the-fly JEC and perform overlap removal with numerator
// e/mu with pt > x (defaults are 10/5 GeV)
/*****************************************************************************************/
    std::vector<LorentzVector> getJets(int idx, FactorizedJetCorrector* jet_corrector, enum JetType type, double deltaR, double min_pt, double max_eta, double mu_minpt = 5, double ele_minpt = 10);


/*****************************************************************************************/
// get sumpt, skip jets overlapping with numerator e/mu with pt>x (defaults are 10/5 GeV)
/*****************************************************************************************/
    float sumJetPt(int idx, enum JetType type, double deltaR, double min_pt, double max_eta, double mu_minpt = 5, double ele_minpt = 10);

/*****************************************************************************************/
// same as above, but allowing use of on-the-fly JEC corrections
/*****************************************************************************************/
    float sumJetPt(int idx, FactorizedJetCorrector* jet_corrector, enum JetType type, double deltaR, double min_pt, double max_eta, double mu_minpt = 5, double ele_minpt = 10);


/*****************************************************************************************/
// get sumpt, skip jets overlapping with numerator e/mu with pt>x (defaults are 10/5 GeV)
/*****************************************************************************************/
    int nJets(int idx, enum JetType type, double deltaR, double min_pt, double max_eta, double mu_minpt = 5, double ele_minpt = 10);

/*****************************************************************************************/
// same as above, but allowing use of on-the-fly JEC corrections
/*****************************************************************************************/
    int nJets(int idx, FactorizedJetCorrector* jet_corrector, enum JetType type, double deltaR, double min_pt, double max_eta, double mu_minpt = 5, double ele_minpt = 10);


/*****************************************************************************************/
// extra Z veto
/*****************************************************************************************/
    bool overlapsOtherNNHypInZ(int idx); //similar to makesExtraZ, uses hyps only

/*****************************************************************************************/
// number of good vertices in the event
/*****************************************************************************************/
    int numberOfGoodVertices();

};
#endif

