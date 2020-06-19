//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/__NSInspectorBarItemController.h>

@class NSNumberFormatter, NSPopUpButton;

@interface MailInspectorBarItemController : __NSInspectorBarItemController
{
    NSNumberFormatter *_fontSizeFormatter;
    NSPopUpButton *_fontSizePopUpButton;
    NSPopUpButton *_listPopUpButton;
    NSPopUpButton *_indentationPopUpButton;
}

+ (id)keyForItemIdentifier:(id)arg1;
+ (id)supportedInspectorItemIdentifiers;
+ (id)nibName;
@property(retain, nonatomic) NSPopUpButton *indentationPopUpButton; // @synthesize indentationPopUpButton=_indentationPopUpButton;
@property(retain, nonatomic) NSPopUpButton *listPopUpButton; // @synthesize listPopUpButton=_listPopUpButton;
@property(retain, nonatomic) NSPopUpButton *fontSizePopUpButton; // @synthesize fontSizePopUpButton=_fontSizePopUpButton;
@property(readonly, nonatomic) NSNumberFormatter *fontSizeFormatter; // @synthesize fontSizeFormatter=_fontSizeFormatter;
//- (void).cxx_destruct;
- (void)updateColorWellColors;
- (void)changeColor:(id)arg1;
- (void)changeFontSize:(id)arg1;
- (void)updateInspectorItemViewsWithIdentifiers:(id)arg1 fontFamilyName:(id)arg2 fontFaceName:(id)arg3 fontPointSize:(double)arg4 foregroundColor:(id)arg5 backgroundColor:(id)arg6 boldTrait:(BOOL)arg7 italicTrait:(BOOL)arg8 underlineStyle:(id)arg9 strikeThrough:(id)arg10 alignment:(long long)arg11 lineSpacingStyle:(id)arg12 textList:(id)arg13;
- (void)supportedInspectorItemViewsDidLoad;
- (BOOL)inspectorBarItemCanBeDetached:(id)arg1;
- (id)initWithInspectorBar:(id)arg1;

@end

