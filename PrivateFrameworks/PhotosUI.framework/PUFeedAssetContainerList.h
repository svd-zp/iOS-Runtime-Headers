/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSOrderedSet;

@interface PUFeedAssetContainerList : NSObject <PLAssetContainerList> {
    NSOrderedSet *_sectionInfos;
}

@property(readonly) unsigned int containersCount;
@property(retain) NSOrderedSet * sectionInfos;

- (void).cxx_destruct;
- (BOOL)canEditContainers;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (BOOL)isEmpty;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)sectionInfos;
- (void)setSectionInfos:(id)arg1;

@end