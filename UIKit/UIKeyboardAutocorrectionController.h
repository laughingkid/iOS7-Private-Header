/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TIKeyboardCandidate;



__attribute__((visibility("hidden")))

@interface UIKeyboardAutocorrectionController : NSObject

{

    TIKeyboardCandidate *_autocorrection;

    _Bool _needsAutocorrection;

    _Bool _deferredAutocorrection;

    _Bool _requestedAutocorrection;

}



@property(copy, nonatomic) TIKeyboardCandidate *autocorrection;

- (void)dealloc;

@property(nonatomic) _Bool deferredAutocorrection; // @synthesize deferredAutocorrection=_deferredAutocorrection;

- (_Bool)hasAutocorrection;

@property(nonatomic) _Bool needsAutocorrection; // @synthesize needsAutocorrection=_needsAutocorrection;

- (void)requestAutocorrectionWithExecutionContext:(id)arg1;

@property(nonatomic) _Bool requestedAutocorrection; // @synthesize requestedAutocorrection=_requestedAutocorrection;

- (void)setNeedsAutocorrection;



@end


