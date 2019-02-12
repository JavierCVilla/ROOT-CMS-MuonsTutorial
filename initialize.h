#ifndef __initialize_h__
#define __initialize_h__

#include "ROOT/RVec.hxx"

using namespace ROOT::VecOps;
auto compute_mass = [](RVec<float> &pt, RVec<float> &eta, RVec<float> &phi, RVec<float> &mass) {
      // Compose four-vectors of both muons
      TLorentzVector p1, p2;
      p1.SetPtEtaPhiM(pt[0], eta[0], phi[0], mass[0]);
      p2.SetPtEtaPhiM(pt[1], eta[1], phi[1], mass[1]);
      // Add four-vectors to build dimuon system and return the invariant mass
      return (p1 + p2).M();
   };

#endif 
