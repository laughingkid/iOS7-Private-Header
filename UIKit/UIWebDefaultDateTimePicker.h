/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIWebFormControl.h"



@class DOMHTMLInputElement, NSString, UIDatePicker;



__attribute__((visibility("hidden")))

@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl>

{

    DOMHTMLInputElement *_inputElement;

    UIDatePicker *_datePicker;

    NSString *_formatString;

    _Bool _shouldRemoveTimeZoneInformation;

    _Bool _isTimeInput;

}



- (void)_dateChangeHandler:(id)arg1;

- (void)_dateChanged;

- (void)_dateChangedSetAsNumber;

- (void)_dateChangedSetAsString;

@property(retain, nonatomic) UIDatePicker *_datePicker; // @synthesize _datePicker;

@property(retain, nonatomic) DOMHTMLInputElement *_inputElement; // @synthesize _inputElement;

- (id)_sanitizeInputValueForFormatter:(id)arg1;

- (long long)_timeZoneOffsetFromGMT:(id)arg1;

- (void)controlBeginEditing;

- (void)controlEndEditing;

- (id)controlView;

- (void)dealloc;

- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;



@end

