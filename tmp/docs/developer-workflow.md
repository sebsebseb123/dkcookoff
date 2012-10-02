Developer Workflow
==================

* [Prose.io link][prose.io]


1. Branch a Story branch from Develop when you start a story. Naming
   convention for branch (Number-short description e.g. 179-related-content-blocks).
1. Merge Develop into feature branch regularly and resolve merge
   conflicts.
1. When development is done, go through the DoD steps:
  1. DoD done by the developer before a story can be deployed
    1. Branch must work on a fresh build based on feature branch and
       also fresh install of develop with feature branch merged in.
    1. Documented (written a node inside of doc site, referenced issue
       number and linked other issue numbers)
    1. Success criteria tests performed and passed
    1. Translation (enter the french translation as the english version
       with "(FR)" at the end)
    1. X-browser
    1. responsive testing (orientation, iphone 4, some other non-retina
       phone, ipad)
    1. defensive testing (15 mins)
  1. Final step DoD done before story is deployed
    1. Code review by Shanly
1. When the story has passed DoD, developer deploys story to Develop
   branch
1. Developer runs script to deploy to Acquia Development Environment.
1. Finish DoD on Acquia Development Enviroment:
  1. Developer validates
  1. Jerry performs xQc
  1. Katie tests
1. In case of defects, developer makes changes on feature branch (no
   QC needed for smaller defects) and deploys again to Acquia
Development environment.
1. At the end of the Sprint (usually Friday evenings), Shanly will tag
   the Dev environment and deploy to Acquia Staging environment
1. Once the release has been deployed to the Staging Environment,
   content entry can begin. At regular intervals, Dev db will be
overwritten by the Staging db. All necessary db update hooks need to be
rerun.

<!-- Links -->
   [prose.io]: http://prose.io/#myplanetdigital/esricanada/blob/develop/tmp/docs/developer-workflow.md
