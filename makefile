MAKE=/usr/bin/make
CORES=4

DIRS = $(shell find . -type d -name 'J*')
override DIRS := $(DIRS:%=%.d)

debug:   CALL := debug
release: CALL := release
reset:   CALL := reset
clean:   CALL := clean
clean:   override CORES:= 1

new: newd

# New debug build of library and test.
newd:
	@$(MAKE) clean
	@$(MAKE) debug

# New release build of library and test.
newr:
	@$(MAKE) clean
	@$(MAKE) release

# Build the debug binaries.
debug: $(DIRS)

# Build the release binaries.
release: $(DIRS)

# Reset all version numbers of the JProjectLibraries.
reset: $(DIRS)

# Clean the whole project - library and test.
clean: $(DIRS)

%.d:
	@echo $(MAKE) -j$(CORES) -C $(@:%.d=%) $(CALL)
	@$(MAKE) -j$(CORES) -C $(@:%.d=%) $(CALL)