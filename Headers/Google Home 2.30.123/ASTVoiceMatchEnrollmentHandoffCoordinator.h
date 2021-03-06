//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTScreenCoordinator.h"

#import "ASTSetupStepViewControllerDelegate-Protocol.h"

@class ASTChildAccountProperties, ASTEnrollmentHandoffViewController;

@interface ASTVoiceMatchEnrollmentHandoffCoordinator : ASTScreenCoordinator <ASTSetupStepViewControllerDelegate>
{
    ASTChildAccountProperties *_childAccountProperties;
    ASTEnrollmentHandoffViewController *_handoffViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASTEnrollmentHandoffViewController *handoffViewController; // @synthesize handoffViewController=_handoffViewController;
- (void)setupStepViewController:(id)arg1 didTapLinkWithURLString:(id)arg2;
- (void)setupStepViewController:(id)arg1 didTapRightFooterButton:(id)arg2;
- (void)setupStepViewController:(id)arg1 didTapLeftFooterButton:(id)arg2;
- (id)viewController;
- (void)start;
- (id)initWithChildAccountProperties:(id)arg1;

@end

