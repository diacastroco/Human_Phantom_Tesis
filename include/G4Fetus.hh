#ifndef G4Fetus_h
#define G4Fetus_h 1

#include "G4VPhysicalVolume.hh"
#include "G4VOrgan.hh"

class G4VPhysicalVolume;
class G4LogicalVolume;

class G4Fetus: public G4VOrgan
{
public:

  G4Fetus();
  ~G4Fetus();
  G4VPhysicalVolume* Construct(const G4String&, G4VPhysicalVolume*, 
				    const G4String&, G4bool, G4bool);
private:
};
#endif
