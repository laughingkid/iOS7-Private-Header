/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVVideoCompositionInstruction.h"


@class AVMutableVideoCompositionInstructionInternal, NSArray;



@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction

{

    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;

}



+ (id)videoCompositionInstruction;

@property(retain, nonatomic) struct CGColor *backgroundColor;

@property(nonatomic) _Bool enablePostProcessing;

@property(copy, nonatomic) NSArray *layerInstructions;

@property(nonatomic) CDStruct_e83c9415 timeRange;



@end


