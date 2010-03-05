// -*- C++ -*-

// $Id: jetSelections.h,v 1.3 2010/02/21 01:14:45 jmuelmen Exp $

#ifndef JETSELECTIONS_H
#define JETSELECTIONS_H

#include <vector>
#include "CMS2.h"

enum JetType {
     JETS_TYPE_JPT,
     JETS_TYPE_PF_CORR,
     JETS_TYPE_PF_UNCORR,
     JETS_TYPE_CALO_CORR,
     JETS_TYPE_CALO_UNCORR,
     JETS_TYPE_GEN
};

enum CleaningType {
     JETS_CLEAN_NONE,			// dirty, dirty jets
     JETS_CLEAN_HYP_E_MU,		// e or mu from hypothesis
     JETS_CLEAN_HYP_E,			// e only from hypothesis
     JETS_CLEAN_SINGLE_E,		// e in single-lepton final state (QCD)
};

#define JET_DEFAULT_TYPE 	JETS_TYPE_JPT
#define JET_DEFAULT_CLEANING 	JETS_CLEAN_HYP_E_MU
#define JET_DEFAULT_DR		0.4
#define JET_DEFAULT_PT		30
#define JET_DEFAULT_ETA		2.4

// vector of p4's of the jets passing selections
std::vector<LorentzVector> getJets (unsigned int i_hyp,  // hyp or single-e to use for cleaning
				    bool sort = false,
				    enum JetType = JET_DEFAULT_TYPE,
				    enum CleaningType = JET_DEFAULT_CLEANING,
				    double deltaR = JET_DEFAULT_DR,
				    double min_pt = JET_DEFAULT_PT,
				    double max_eta = JET_DEFAULT_ETA);

// vector of bools aligned with the jet collection telling you which
// jets passed the selections
std::vector<bool> getJetFlags (unsigned int i_hyp,  // hyp or single-e to use for cleaning
			       enum JetType = JET_DEFAULT_TYPE,
			       enum CleaningType = JET_DEFAULT_CLEANING,
			       double deltaR = JET_DEFAULT_DR,
			       double min_pt = JET_DEFAULT_PT,
			       double max_eta = JET_DEFAULT_ETA);

// number of jets passing selections
int nJets (unsigned int i_hyp,  // hyp or single-e to use for cleaning
	   enum JetType = JET_DEFAULT_TYPE,
	   enum CleaningType = JET_DEFAULT_CLEANING,
	   double deltaR = JET_DEFAULT_DR,
	   double min_pt = JET_DEFAULT_PT,
	   double max_eta = JET_DEFAULT_ETA);

// scalar sum pt of jets passing selections
double sumPt (unsigned int i_hyp,  // hyp or single-e to use for cleaning
	      enum JetType = JET_DEFAULT_TYPE,
	      enum CleaningType = JET_DEFAULT_CLEANING,
	      double deltaR = JET_DEFAULT_DR,
	      double min_pt = JET_DEFAULT_PT,
	      double max_eta = JET_DEFAULT_ETA);

#endif // SEL_JETS_H
