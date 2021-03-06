/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSKAddedToDocumentContext;

@interface TSWPReplaceTextCommand : TSWPTextCommand {
    BOOL _coalesceable;
    BOOL _coalescingText;
    BOOL _deletingBackward;
    NSString *_dictationAndAutocorrection;
    BOOL _doNotTrackDeletion;
    TSKAddedToDocumentContext *_dolcContext;
    NSString *_language;
    id _text;
    BOOL _updateSelection;
    BOOL _withPasteRules;
}

@property(retain) NSString * dictationAndAutocorrection;
@property(retain) NSString * language;
@property BOOL updateSelection;

- (id)actionString;
- (BOOL)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (BOOL)coalescingText;
- (void)dealloc;
- (id)dictationAndAutocorrection;
- (void)doCommit;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 insertStorage:(id)arg3 withPasteRules:(BOOL)arg4 dolcContext:(id)arg5;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 insertText:(id)arg3 coalesceable:(BOOL)arg4 coalescingText:(BOOL)arg5;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 insertText:(id)arg3;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3 coalesceable:(BOOL)arg4 coalescingText:(BOOL)arg5 updateSelection:(BOOL)arg6 deletingBackward:(BOOL)arg7 undoSelection:(id)arg8;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3 coalesceable:(BOOL)arg4 coalescingText:(BOOL)arg5 updateSelection:(BOOL)arg6 deletingBackward:(BOOL)arg7;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3 updateSelection:(BOOL)arg4;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3;
- (BOOL)isCoalesceable;
- (id)language;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_selectionRangeAfterReplacingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (int)persistenceKind;
- (void)redo;
- (void)setDictationAndAutocorrection:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setUpdateSelection:(BOOL)arg1;
- (void)undo;
- (BOOL)updateSelection;

@end
