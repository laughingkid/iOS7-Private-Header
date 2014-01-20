/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIFormPeripheral.h"



@class DOMHTMLInputElement;



__attribute__((visibility("hidden")))

@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral>

{

    DOMHTMLInputElement *_inputElement;

    id <UIWebFormControl> _control;

}



+ (id)createPeripheralWithDOMHTMLInputElement:(id)arg1;

@property(retain, nonatomic) id <UIWebFormControl> _control; // @synthesize _control;

- (long long)_datePickerModeForInputType:(id)arg1;

@property(retain, nonatomic) DOMHTMLInputElement *_inputElement; // @synthesize _inputElement;

- (id)assistantView;

- (void)beginEditing;

- (void)dealloc;

- (void)endEditing;

- (id)initWithDOMHTMLInputElement:(id)arg1;



@end

