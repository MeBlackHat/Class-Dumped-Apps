//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Node.h>

#import <Module_Framework/GWA2VirtualNode-Protocol.h>

@class NSString, ORCH2CollapsibleNode;

@interface GWA2CollapsibleNode : GWA2Node <GWA2VirtualNode>
{
    ORCH2CollapsibleNode *_collapsibleNodeExtension;
    GWA2Node *_collapsedNode;
    GWA2Node *_expandedNode;
    _Bool _expanded;
}

- (void).cxx_destruct;
- (_Bool)focusIfTextFieldIsEmpty;
- (_Bool)focusIfDataContainsError;
- (_Bool)focus;
- (void)expansionStateDidChange:(id)arg1;
- (id)activeConcreteSubNodes;
- (id)concreteSubNodes;
- (void)setLayoutParentNode:(id)arg1;
- (void)applyStyleProperties;
- (void)applyLayoutProperties;
- (void)dealloc;
- (id)initWithNode:(id)arg1 pageContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

