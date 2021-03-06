/**
 * \file   lightFieldViewGenerator_AllInFocus.h
 * \author Clemens Brummer
 * \date   01.11.2012
 */

#ifndef LIGHT_FIELD_VIEW_GENERATOR_ALLINFOCUS_H
#define LIGHT_FIELD_VIEW_GENERATOR_ALLINFOCUS_H

#include "lightFieldViewGenerator.h"

class cLightFieldViewGenerator_AllInFocus : public cLightFieldViewGenerator {

public:
  cLightFieldViewGenerator_AllInFocus() : cLightFieldViewGenerator(), _lens_mask(NULL) {};
  //~cLightFieldViewGenerator() {};

  virtual lfError generate(void *raw_image, void *depth_image, lfCalibrationParameter_t* cparams, lfViewGeneratorParameter_t* vparams);

private:
  void* _lens_mask;
};
#endif // LIGHT_FIELD_VIEW_GENERATOR_ALLINFOCUS_H