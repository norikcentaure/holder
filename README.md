# MRPT transition

You will find all programs and documents useful to run MRPT calculations as they've been implemented so far.

The notes provide more context into the worflow.

The repository contains:

0. **notes**

   The folder `notes` contains the notes I prepared to help the transition.

   

1. **sqa**

   The folder `sqa` contains the Second Quantization Algebra package, as well as the API I developed.

   

2. **sqa_scripts**

   The folder `sqa_scripts` contains the scripts that use `sqa` to generate the lines of tensor contraction involved in the relevant equations to be solved to get NEVPT and MRLCC perturbation corrections.

   

3. **dice**

   The folder `dice` contains the (only slightly) modified files from a fairly recent commit of `dice`, to produce the RDMs for the workflow.

   

4. **icpt**

   The folder `icpt` contains the Internally Contracted Perturbation Theory package to perform the tensor contractions and solve the Hylleraas functionals for NEVPT and MRLCC.

   

5. **pyscf**

   The folder `pyscf` contains the (only slightly) modified files from a fairly recent commit of `pyscf`, which codes the workflow itself, and triggers all the necessary steps to obtain the PT energies.

   


