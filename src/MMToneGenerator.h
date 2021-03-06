//
//  MMToneGenerator.h
//  MiuMiu
//
//  Created by Peter Zion on 11/10/08.
//  Copyright 2008 Peter Zion. All rights reserved.
//

@interface MMToneGenerator : NSObject
{
@private
	unsigned numTones;
	float *amplitudes;
	float *multipliers;
}

-(id) initWithNumTones:(unsigned)_numTones
	amplitudes:(const float *)_amplitudes
	frequencies:(const float *)_frequencies
	samplingFrequency:(float)_samplingFrequency;

-(void) injectSamples:(short *)samples count:(unsigned)count offset:(unsigned)offset;

@end
